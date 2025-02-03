#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
  ch = tolower(ch);
  switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
  
          printf("Character '%c' is vowel:\n",ch);
       break;
       default:
       if(ch>='a'&&ch<='z')
        {  printf("Character '%c' is cosonant:",ch);
        }
        else
   {
     printf("The charater'%c' is not alphabet:\n");
      }
      break;
}
         return 0;
}