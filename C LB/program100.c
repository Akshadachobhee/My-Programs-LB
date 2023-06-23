/*
Input : 7
Output : 7 6 5 4 3 2 1 

Input : 3
Output :  3 2 1
*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;

    for(iCnt = iFreq; iCnt >= 1; iCnt--)
    {
    printf("%d\t",iCnt); // becauase we don't declare iCnt = 0 except in array 
    }
    printf("\n"); // optional
 } 
 int main()
 {
      int iFrequency = 0;
    printf("Enter the frequency of symbol");
    scanf("%d",&iFrequency);
 
    Display(iFrequency);

    return 0;
 }