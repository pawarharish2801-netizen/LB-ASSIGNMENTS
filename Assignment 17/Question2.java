import java.util.Scanner;

class Logic
{
    
    public boolean Check(int iNo)
    {
        int iDigit = 0;
        int iOriginal = iNo;
        int iReversed= 0;
    
        while (iNo!=0) 
        {
            iDigit = iNo %10;
            iNo = iNo /10;
            iReversed =(iReversed*10) + iDigit;
        }
        if(iReversed == iOriginal)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }
}

class Question2 
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue = 0 ;
        boolean bRet = false;

        System.out.println("Enter your Number :");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.Check(iValue);
        if(bRet == true)
        {
          System.out.println("It's a polyndrome");  
        }
        else
        {
          System.out.println("It's not a polyndrome");  
        }
    }    
}
