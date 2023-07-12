//Accept n numbers from user and perform Summation of elements
#include<stdio.h> //IO
#include<stdlib.h> //Memory management 
//void Demo(int *Arr,int iLength)
int Addition(int Arr[],int iLength) 
{
    int iCount= 0;
    int iSum = 0;
    for(iCount = 0;iCount< iLength;iCount++)
    {
    iSum = iSum + Arr[iCount];
    }
    return iSum;
}
int main() // Entry point function
{
int iSize = 0; // To store size of array
int *ptr = NULL; //To store addres of array 
int iCnt = 0; //Loop Counter
int iRet = 0;
//Step 1 : Accepts number of elements from user
printf("Enter number of elements :  \n");
scanf("%d",&iSize);

//Step 2: Allocate the memory dynamically
ptr = (int *)malloc(iSize * sizeof(int));

//Step 3: Accept the value from user
printf("Enter the elements : \n");
for(iCnt = 0; iCnt < iSize; iCnt++)
{
    scanf("%d",&ptr[iCnt]);
}

printf("Elements of array are: \n");
for(iCnt = 0; iCnt < iSize; iCnt++)
{
    printf("%d\n",ptr[iCnt]);
}

//Step 4: Pass the array to the function
iRet=Addition(ptr,iSize); 
printf("Addition is: %d\n",iRet);
// Step 6: Deallocate memory 
free(ptr);

return 0; // Return success to OS
}