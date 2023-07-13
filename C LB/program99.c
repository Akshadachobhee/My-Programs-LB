/*
Input : 7
Output : 0 1 2 3 4 5 

Input : 3
Output :  0 1 2 
*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
    printf("%d\t",iCnt-1); // becauase we don't declare iCnt = 0 except in array 
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