    import java.util.Scanner;

class Logic
{
    
    public int FindMinDigit(int iNo) 

    {
        int iDigit = 0 ;
        int iMin = 10;

        while (iNo !=0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10 ;
            if (iDigit < iMin)
            {
                iMin = iDigit;
            }  
        }
       return iMin;
    }  
}          
class Question5
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iRet = 0   ;
        
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.FindMinDigit(iValue1);
        System.out.println("The Min Digit is : "+iRet);
        
    }    
}
