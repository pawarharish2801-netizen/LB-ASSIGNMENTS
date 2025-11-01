import java.util.Scanner;

class Logic
{
    
    

    public int CountDigit(int iNo)
    { 
        int iDigit = 0 ;
        int iCnt = 0;

        if(iNo == 0)
        {
        return 1;
        }

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        
        while (iNo !=0)
        {
            iDigit = iNo%10 ;
            iNo= iNo/10;
            iCnt = iCnt +1;
        }

        return iCnt;
    }

}

class Question5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0 ;
        int iRet = 0;

         System.out.println("Enter your Number :");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.CountDigit(iValue);

        System.out.println("The total no of digits are : "+iRet);
        

    }
}