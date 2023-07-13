/*
Input : 7
Output : 1 2 3 4 5 7

Input : 3
Output : 1 2 3
*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq;iCnt++)
    {
    printf("%d\t",iCnt);
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