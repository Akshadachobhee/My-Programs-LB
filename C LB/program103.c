/*
Input : 7
Output : a b c d e f g

*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    char ch = 'A'; // character should be in 'single quote'

    for(iCnt = 1; iCnt <= iFreq;iCnt++)
    {
    printf("%c\t",ch);
    ch++; // it shows after a letter
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