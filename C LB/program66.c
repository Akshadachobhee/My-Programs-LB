#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt++;
        iNo = iNo/10;
    }


return ((float)iSum / (float)iCnt); 
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number");
    scanf("%d",&iValue);

    fRet = DigitsAverage(iValue);

    printf("%f is a average of digits",fRet);

    return 0;

}