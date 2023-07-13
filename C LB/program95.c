/*
Input : 7
Output : * * * * * * 

Input : 3
Output : *  *   *
*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq;iCnt++)
    {
    printf("*\t");
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