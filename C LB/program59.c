#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo , int iSearch)
{
    int iDigit = 0;

    if((iSearch < 0) || (iSearch  > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return false;
    } 
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
    if (iDigit == iSearch)
    {
        
    }

    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Enter  digit you want to know : \n");
    scanf("%d",&iValue2);

    bRet = CheckDigit(iValue1,iValue2); 

    if (bRet == true)
    {

    }


return 0 ;
}