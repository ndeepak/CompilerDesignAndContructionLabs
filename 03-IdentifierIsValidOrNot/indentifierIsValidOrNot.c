// Write a C program to test whether a given identifier is valid or not
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	while(1){
    char a[10];
    int flag, i = 1;
    printf("\n Enter an identifier: ");
    gets(a);
    if(isalpha(a[0]) ||a[0] == '_')
        flag = 1;
    else
        printf("\n Not a Valid Identifier!!!");
    
    while(a[i] != '\0')
    {
        if(!isdigit(a[i]) && !isalpha(a[i]) && a[i]!= '_')
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag ==1)
        printf("\n Valid Identifier");
    else
        printf("Not a Valid Identifier");
	}
}
