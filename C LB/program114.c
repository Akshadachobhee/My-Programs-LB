/*
Input :  
Rows : 3
col:   5
Output : 
 1 1 1 1 1
 2 2 2 2 2
 3 3 3 3 3
*/

#include<stdio.h>
 void Display(int iRow, int iCol)
 {  
   int i = 0;
   int j = 0;

   for(i=1;i<= iRow;i++) // outer loop
   {
    for(j=1; j<=iCol ; j++) // Inner loop
    {
        printf("%d\t",i); // i manje row nusar print hotay
    }
    printf("\n");
   }
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