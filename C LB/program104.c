
/*
Input : 7
Output : a b c d e f g

*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    char ch = '\0'; // default initilization of character
    
    //      1                2            3
    for(iCnt = 1,ch ='A'; iCnt <= iFreq;iCnt++,ch++)
    {
    printf("%c\t",ch); //4
    ch++; // It shows after a letter
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