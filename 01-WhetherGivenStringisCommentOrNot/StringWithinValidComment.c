// Write a program to test whether given entered string within valid comment section or not.
#include <stdio.h>
#include <conio.h>
int main()
{
    char comm[30];
    int i = 2, a = 0;
    while(1){
    printf("\n\n Enter Comment: ");
    gets(comm);
    if (comm[0] == '/')
    {
        if (comm[1] == '/')
            printf("\n It is a Comment. \n");
        else 
			if (comm[1] == '*')
	        {
	            for (i = 2; i <= 30; i++)
	            {
	                if (comm[i] == '*' && comm[i + 1] == '/')
	                {
	                    printf("\n It is a Comment.\n");
	                    a = 1;
	                    break;
	                }
	                else
	                	continue;
	            }
	            if (a == 0)
	                printf("\n It is not a Comment.\n");
	        }
	        else
	            printf("\n It is not a Comment.\n");
	   		}
	    else
	        printf("\n It is not a Comment.\n");
	}
}
