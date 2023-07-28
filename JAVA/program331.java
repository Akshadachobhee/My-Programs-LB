//Approach 3
import java.util.*;

class Program331
{
  
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.EvenFact(iNo);

        System.out.println("Multiplication of Even factorial is : "+iRet);

       
        sobj.close();
    }
}

class Numbers 
{
    public int EvenFact(int iValue)
    {
        int iMult = 1;
        for(int iCnt = 1; iCnt <= iValue; iCnt++)
        {
            if(((iValue % iCnt) == 0) && ((iCnt % 2) == 0))
            {
                if((iCnt % 2) == 0)
                {
                    iMult = iMult * iCnt ; 
                }
            }
        }

        return iMult;
    }
}
