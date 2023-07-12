#include<stdio.h>

int MinimumDigit(iNo)
{
    int iDigit = 0;
    int iMin = 9;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MinimumDigit(iValue);

    printf("%f is a smallest digits",iRet);

    return 0;

}