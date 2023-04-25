//Write a program which checks whether number is even or odd.
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

bool CheckEvenOdd(int iNo)
{
  if ((iNo % 2) == 0)
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

    printf("Please Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue); // Function call
    
    if (bRet == true)
    {
        printf("%d is Even Number",iValue);
    } 
    else
    {
       printf("%d is Odd Number",iValue);
    }
    return 0;
}