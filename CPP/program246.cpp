//Toggle Bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToogleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X0000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iBit =0;
    UINT iRet =0;

    cout <<"Enter the number : "<< "\n";
    cin>>iValue;

    cout<<"Enter the position : "<< "\n";
    cin>>iBit;

}
