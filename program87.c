//accept n nos from user and second no and check if it is in array
//avoid this syntax
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt= 0;
    for(iCnt = 0; iCnt <iLength;iCnt++)
    {
    if( Arr[iCnt]== iNo)
    {
        break;
    }}
    if( Arr[iCnt]== iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;
    bool bRet = false;
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    ptr = (int *) malloc(iSize * sizeof(int));
    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the number you wish to check:\n");
    scanf("%d", &iValue);
    printf("Elements of the array are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    bRet = Search(ptr,iSize, iValue);
    if(bRet ==true)
    {
        printf("%d is present int the array \n",iValue);
    }
    else
    {
        printf("%d is not present in the array \n", iValue);
    }
    free(ptr);
    return 0;
}