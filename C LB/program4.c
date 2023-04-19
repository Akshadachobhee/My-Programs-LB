/*
Steps to create the application

Step 1 : Understand the problem statement
Step 2 : Write the Algorithm
Step 3 : Decide the programming Language
Step 4 : Write the program
Step 5 : Test the written program


*/
/* --1--
Write a program which performs addtion of two numbers 
 Understand 
*/

/* --2--
Algorithm

START
  Accept First Number as No1
  Accept Second Number as No2
  Create one varible as ANS
  Perform Addition Of No1 and No2
  Store the Addition into variable ANS
  Display the value of ANS
STOP


*/

//--3-- Actual Program starting
///////////////////////////////////////////
//
//Problem Satement : Write a program which performs addtion of two numbers 
//
///////////////////////////////////////////

#include<stdio.h>

 //////////// Industrial way of programming
 //
 // Function name : Addition
 // Input :         Unsigned integer , Unsigned integer
 // Output :        Unsigned integer
 // Description :   Performs addition of 2 numbers
 // Author :        Akshada
 // Date :          18/04/2023 + 19/04/2023
 //
 //////////
//Business Logic / Functionnal Language
 //////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
  unsigned int iResult = 0;
  iResult = iValue1+iValue2;
  return iResult;
}
 ////////
 //Entry Point Function
 ///////

 int main()
 {
   auto unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);
     printf("Addition is : ",iAns);
   
   return 0;
 }