//Accept string from user and find and replace space with underscore

#include<stdio.h>

void EditString(char *str) //string madhe catch zal * mule hi C , C+= chi  takad aahe
{
   while (*str != '\0')
   {
    if(*str == ' ')
    {
        *str = '_';
    }
    str++;
   }
   
    
}
int main()
{
    char Arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr); //Adress pathvla - Call by address -Main memory
    printf("String after editing is : %s\n",Arr);
    return 0;
}

/*
Enter string:
Akshada Chobhe
String after editing is : Akshada_Chobhe
*/