#include<stdio.h>
int SumFactors(int iNo)
{
int iCnt = 0; //loop
int iSum = 0; //Addition sathi

if(iNo < 0) //Updater
{
iNo = -iNo;
}
for(iCnt= 1; iCnt <= (iNo/2); iCnt++)
{
if((iNo % iCnt)==0)
{
iSum = iSum + iCnt;
}
}
return iSum;
}
int main()
{
 int iValue=0;
 int iRet =0;

 printf("Enter Number : \n");
 scanf("%d",&iValue);
 iRet = SumFactors(iValue);

 printf("Summation of factors is %d\n",iRet);
 return 0;

}