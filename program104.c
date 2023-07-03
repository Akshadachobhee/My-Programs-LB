#include<stdio.h>
void Display(int iNo)
{
    char ch = 'A';
   int iCnt = 0;
 for(iCnt = 1, ch ='A'; iCnt <= iNo; iCnt++, ch++)
{
    printf("%c\t",ch);
}
}

int main()
{
    int iValue = 0;
    printf("Enter value \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}