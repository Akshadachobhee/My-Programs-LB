//Approach 2
import java.util.*;

class program345
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Display();
        System.out.println("Suumation "+aobj.Summation());
    }
}

class ArrayX
{
    public int Arr[];
    
    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        int iCnt = 0;
        for(iCnt = 0;iCnt <= Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {

        System.out.println("Elements are  : ");
        int iCnt = 0;
        for(iCnt = 0;iCnt <= Arr.length;iCnt++)
        {
           System.out.println(Arr[iCnt] +"\t");
        }
        System.out.println();
    }
     
    public int Summation()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt <= Arr.length; iCnt++)
        {
        iSum = iSum + Arr[iCnt];

        }
        return iSum;
    }
}
