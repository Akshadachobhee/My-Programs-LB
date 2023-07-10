//Display "Jay ganesh" as many as you want times on screen 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    //
    printf("Enter the frequency of jay Ganesh Statement  : \n");
    scanf("%d",&iNo);
    for(iCnt = 1; iCnt<=iNo ;iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
 
 int iValue =0 ;

 Display(iValue);  

    return 0;
}