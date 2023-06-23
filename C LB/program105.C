/*
Input : 7
Output : a 1 b 2 c 3 d 4 e 5 f 6 g 7

*/
#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
    char ch = '\0'; // default initilization of character
    
    //      1                2            3
    for(iCnt = 1,ch ='a'; iCnt <= iFreq;iCnt++,ch++)
    {
    printf("%c\t%d\t",ch,iCnt); //4
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