/*
Input : 7
Output : A A A A A A A 

Input : 3
Output : A A A
*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq;iCnt++)
    {
    printf("A\t");
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