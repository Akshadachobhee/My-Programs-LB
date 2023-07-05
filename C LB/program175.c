
//Accept string and find frequency of character of capital and small letters
#include<stdio.h>

void Frequency(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt =0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }
    printf("small case characters count : %d\n",iSmallCnt);
    printf("capital case characters count : %d\n",iCapCnt);
    
}
int main()
{
    char Arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);

    return 0;
}
/*
Enter string:
Akshada Chobhe
small case characters count : 11
capital case characters count : 2
*/