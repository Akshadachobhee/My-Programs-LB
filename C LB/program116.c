/*
Input :  
Rows : 3
col:   5
Output : 
a a a a a 
b b b b b
c c c c c 
*/

#include<stdio.h>
 void Display(int iRow, int iCol)
 {  
   int i = 0;
   int j = 0;
    char ch = '\0';
    // Sir ch logic bagh ... he chuklsy
   for(i=1,ch ='a';i<= iRow;i++) // outer loop
   {
    for(j=1; j<=iCol ; j++) // Inner loop
    {
        printf("%c\t",ch); // See matrix table 
    }
    printf("\n");
    ch++;
   }
   /*
     int i = 0;
    int j = 0;
    char ch = '\0';
   for(i=1;i<= iRow;i++,) // outer loop
   {
    for(j=1; j<=iCol ; j++) // Inner loop
    {
        printf("%c\t",ch); // See matrix table 
    }
    printf("\n");
   */
 } 
 int main()
 {
     int iValue1 = 0;
     int iValue2 = 0;

      printf("Enter rows : \n");
      scanf("%d",&iValue1);

      printf("Enter columns : \n");
      scanf("%d",&iValue2);

      Display(iValue1, iValue2);

      return 0;
 }