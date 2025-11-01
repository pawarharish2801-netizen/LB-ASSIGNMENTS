import java.util.Scanner;

class Logic
{
    public int iDigit = 0;
    public int iSum = 0;

    public int SumDigit(int iNo)
    {
        while (iNo!=0) 
        {
            iDigit = iNo %10;
            iNo = iNo /10;
            iSum = iSum + iDigit;  
        }
        return iSum;
    }
}

class Question1 
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue = 0 ;
        int iRet = 0;

         System.out.println("Enter your Number :");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.SumDigit(iValue);

        System.out.println("The total Sum of digits is : "+iRet);
    }    
}
