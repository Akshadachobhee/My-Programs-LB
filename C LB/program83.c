//Write maximun number.

#include<stdio.h> 
#include<stdlib.h>
int MaxNum(int Arr[],int iLength)
{
    int iMax = Arr[0];
    int iCount=0;
    for(iCount=0; iCount <= iLength; iCount++)
    {
        if(Arr[iCount] > iMax)
        {
            iMax = Arr[iCount];
        }
    }
    return iMax;
}
int main()
    {
        int iSize = 0;
        int *ptr = NULL;
        int iCnt = 0;
        int iRet = 0;

        printf("Enter number of elements : \n");
        scanf("%d",&iSize);

        ptr = (int *)malloc(iSize * sizeof(int));

        printf("Enter the elements : \n");
        for(iCnt=0 ; iCnt < iSize; iCnt++)
        {
            scanf("%d",&ptr[iCnt]);
        }

        printf("Elements of the array are : \n");
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            printf("%d\n",ptr[iCnt]);
        }
        
        iRet=MaxNum(ptr,iSize);
        printf("Largest Element is : %d\n",iRet);

        free(ptr);

        return 0;
    }
