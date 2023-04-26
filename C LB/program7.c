//Write a program which checks whether number is divisible by 3 & 5
#include<stdio.h>   // For printf and scanf
#include<stdbool.h> //For bool data 
/////////////////////////////////////////////////
//
//Funtion name :  CheckEvenOdd 
//Input :         Integer
//Output :        Boolean
//Description :   Check whether input is even or odd
//Author :        Akshada 
//Date :          25/04/2023
//
////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
  if (((iNo % 3) == 0) && ((iNo % 5) == 0))
  {
    return true;
  }
  else
  {
    return false;
  }
}
////////////////////////////////////////////////////////////
//Entry point function 
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;       //variable to accept the input
    bool bRet = false;    //variable to accept return value

    printf("Please Enter number to check whether it is Divisible by 3 & 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue); // Function call
    
    if (bRet == true)
    {
        printf("%d is completely Divisible by 3 & 5",iValue);
    } 
    else
    {
       printf("%d is Not completely divisible by 3 & 5",iValue);
    }
    return 0;
}