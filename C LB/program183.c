
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
 while(*src !='\0')
 {
    *dest = *src;
    src++;
    dest++;
 }
 *dest = '\0'; // Because string full copy karaychiye aani aaplyla \0 suddha ghyav lagnare
   
    
}
int main()
{
    char Arr[20];
    char Brr[20]; // for storing Copy of the string 

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr); // Passing addresses of Arr and Brr
    printf("String after copy is : %s\n",Brr);
    return 0;
}
