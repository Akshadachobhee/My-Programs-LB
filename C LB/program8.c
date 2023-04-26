/*
Function Name:display result
input: unsigned integer
output: 
Description: write a program to accept marks and display the class accordingly
0-34=fail
35-49= pass class
50-59= second class
60-74=first class
74- 100 = first class with distinction
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/
#include<stdio.h>

void DisplayResult(float fMarks)
{

//Filter
if((fMarks >= 0.0) && (fMarks <= 100.0 ))
{
//printf("Result is  : ");
    if((fMarks >= 0.0f)&&(fMarks < 35.0f))
    {
        printf(" Fail",fMarks);
    }
    else if ((35.0f <= fMarks) && (50.0f > fMarks))
    {
        printf("Pass class");
    }
      else if ((50.0f <= fMarks) && (60.0f > fMarks))
    {
        printf("Second class");
    }
      else if ((60.0f <= fMarks) && (75.0f > fMarks))
    {
        printf("First class");
    }
      else if ((75.0f <= fMarks) && (100.0f >= fMarks))
    {
        printf("First Class With Distinction");
    }
    
}
else
{
    printf("Enter valid number\n\n");
    printf("Enter number betweed 0 to 100");
}
}
    int main()
     {
    float fValue = 0.0f;
    printf("Enter your marks \n");
    scanf("%f",&fValue);
    
    DisplayResult(fValue);    
     return 0;
     }