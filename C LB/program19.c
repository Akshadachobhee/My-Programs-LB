// Print 1 to 5 number

#include<stdio.h>
 
 void Display(int iNo)
 {
     int iCnt = 0;
     //Filter
     if(iNo < 0)
     {
        printf("Error : Invalid Input");
        printf("Note : Please Enter Positive number");
        return;
     }
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
 }
 int main()
 {
  int iValue = 0;
  printf("How many number you want to print \n ");
  scanf("%d",&iValue);
   Display(iValue);
     return 0;
 }