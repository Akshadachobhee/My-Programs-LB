#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr =NULL;

    printf("Enter the number of elements : \n");// Step 1
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));// Step 2
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    else
    {
        printf("Memory allocated successfully");
    }
    return 0;
}
