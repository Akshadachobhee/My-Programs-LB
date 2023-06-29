//accept array from user and no return first occurence index
#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1 // uer defined macro
int SearchFirstOccurence(int Arr[], int iLength, int iNo)
{
    int iCnt= 0;
    for(iCnt= 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            break;
        }
    }
    if(iCnt== iLength)
        {
            return ERR_NOTFOUND;
        }
        else
        {
            return iCnt;
        }
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;
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
    iRet = SearchFirstOccurence(ptr,iSize, iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("there is no such occurence\n");
    }
    else
    {
    printf("%d occured at %d\n", iValue, iRet);
    }
    free(ptr);
    return 0;
}