/*
Input :  
Rows : 4
col:   5
Output : 
# # # # #
* * * * *
# # # # #
* * * * *

*/

#include<stdio.h>
 void Display(int iRow, int iCol)
 {  
   int i = 0;
   int j = 0;
   char Arr[2] = {'*','#'};
   for(i=1;i<= iRow;i++) // outer loop
   {
    for(j=1; j<=iCol ; j++) // Inner loop
    {
        //Without if else
        printf("%c\t",Arr[(i%2)]); // 
                 
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