#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{

}
int main()
{
 int iValue = 0;
 bool bRet = false;

 printf("Enter number : \n");
 scanf("%d",&iValue);

 bRet = CheckPrime(iValue);

 if (bRet == true)
  {
    printf("%d is PRIME number",iValue);
    }
 else
 {
        printf("%d is not a pfrime");
 }

    return 0;
}