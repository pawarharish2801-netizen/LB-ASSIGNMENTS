import java.util.Scanner;
class Logic
{
    public int iSum = 0;
    public int iCnt = 0 ;

    public boolean EvenOdd(int iNo)
    {
        if (iNo %2 == 0)
        {
            return true ;
        }
        else
        {
            return false;
        }
    }
}


class Question2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false ;

        System.out.println("Enter Your Number");
        iValue = sobj.nextInt();

        Logic lObj = new Logic();

        bRet = lObj.EvenOdd(iValue);

        if(bRet== true)
        {
            System.out.println("The Number is Even ");
        }
        else
        {
              System.out.println("The Number is Odd");
        }

        




    }
}