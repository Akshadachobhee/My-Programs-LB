/*
Input :  5
Output : -5 -4 -3 -2 -1

*/

#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
  
    for (iCnt = -iFreq; iCnt < 0;iCnt++)
    {
      printf("%d\t",iCnt); 
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