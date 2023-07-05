/*
Input :  5
Output : -5 -4 -3 -2 -1 0 1 2 3 4 5

*/

#include<stdio.h>
 void Display(int iFreq)
 {  
    int iCnt = 0;
  /*  *ha starting point aahe*         *Ha END AAHE*
      tyamul value -ve nahi
        hot tar start tithun hote */              
    for (iCnt = -iFreq;                 iCnt <= iFreq;         iCnt++) // 111 cha program eka loop madhe kela
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