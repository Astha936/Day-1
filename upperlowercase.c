#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("The character '%c' is upper case: \n",'ch');
    }
    else if(islower(ch))
    {
         printf("The character '%c' is lower case: \n",'ch');
    }
    else{
         printf("The character is '%c'special character: \n",'ch');
    }
    return 0;
}