//Write maximum &  minimun number.
//garbage value yetiye

#include<stdio.h> 
#include<stdlib.h>
int MinNum(int Arr[],int iLength)
{
    int iMin = Arr[0];
    int iCount=0;
    for(iCount=0; iCount <= iLength; iCount++)
    {
        if(Arr[iCount] < iMin)
        {
            iMin = Arr[iCount];
        }
    }
    return iMin;
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
        
        iRet=MinNum(ptr,iSize);
        printf("Smallest Element is : %d\n",iRet);

        iRet=MaxNum(ptr,iSize);
        printf("Largest Element is : %d\n",iRet);

        free(ptr);

        return 0;
    }
