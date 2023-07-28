//Recheck with sir program
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask) //Bit is on
    {
      return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}
int main()
{
    UINT iValue = 0;
 
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;
    
    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
    }

    return 0;
}

