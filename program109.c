#include<stdio.h>
void Display(int iNo)
{

   int iCnt = 0;
 for(iCnt = (-iNo); iCnt < 0; iCnt++)
{
    printf("%d\t",iCnt);
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