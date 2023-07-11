// String comparison
//wwithout if 
//without if else
// converting while into for loop 
#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    for(;((*str1 !='\0') && (*str2 !='\0') && (*str1 == *str2));)
    {
        //without if
        str1++;
        str2++;
    }
   // without if else
  return((*str1 == '\0') && (*str2 == '\0'));

}

int main()
{
    
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Second String : \n");
    scanf("%[^'\n']s",Brr);
    
    bRet = strcmpX(Arr,Brr);
    
    if (bRet==true)
    {
        printf("Both the strings are identical.\n");
    }
    else
    {
        printf("Strings are different. \n");
    }
    return 0;
}