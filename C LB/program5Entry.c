#include "program5Header.h"
 ////////
 //Entry Point Function
 ///////

 int main()
 {
   auto unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);
     printf("Addition is : %d",iAns);
   
   return 0;
 }