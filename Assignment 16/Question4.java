import java.util.Scanner;

class Reverse
{
    public int iDigit = 0 ;
    public void ReverseDigit(int iNo)
    { 
        while (iNo !=0)
        {
            iDigit = iNo%10 ;
            System.out.println(iDigit);
            iNo= iNo/10;
        }
    }

}

class Question4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0 ;

         System.out.println("Enter your Number :");
        iValue = sobj.nextInt();

        Reverse robj = new Reverse();

        robj.ReverseDigit(iValue);

    }
}