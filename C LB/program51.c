#include<stdio.h>
// Display digits reverse
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    

while(iNo != 0) // iNo ha number joparyant  0 hot nahi toparyant loop
{
iDigit = iNo % 10;
printf("%d\n",iDigit);
iNo /= 10; // Self updating statement // Equal to chya Left hand side la aani right side la same numbaer asel tar value update hote
}
}
int main()
{

    int iValue =0 ;

    printf("Enter number: \n");
    scanf("%d",&iValue);
    DisplayDigits(iValue); // Call by value //7854 hi value janare
    return 0; // Indicates success
}

// Input : 7854
// Output : 4
//          5
//          8
//          7