/*
Input :  7
Output : 2 3 4 6 8 10 12 14

*/

#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
  
    for(iCnt = 1; iCnt <= iFreq;iCnt++)
    {
    printf("%d\t",iCnt * 2); //4
    }
    printf("\n");
 } 
 int main()
 {
      int iFrequency = 0;
    printf("Enter the frequency of symbol : ");
    scanf("%d",&iFrequency);
 
    Display(iFrequency);

    return 0;
 }