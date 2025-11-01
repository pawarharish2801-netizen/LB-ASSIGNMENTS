    import java.util.Scanner;

class Logic
{
    
    public int FindMaxDigit(int iNo) 

    {
        int iDigit = 0 ;
        int iMax = 0;

        while (iNo !=0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10 ;
            if (iDigit > iMax)
            {
                iMax = iDigit;
            }  
        }
       return iMax;
    }  
}          
class Question4
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iRet = 0   ;
        
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.FindMaxDigit(iValue1);
        System.out.println("The Max Digit is : "+iRet);
        
    }    
}
