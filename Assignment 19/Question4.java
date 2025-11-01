import java.util.Scanner;

class Logic
{
    
    public void PrintDigit(int iNo) 
    {
       int iDigit = 0 ;
       while (iNo !=0)
       {
            iDigit = iNo %10 ;
            System.out.println(iDigit);
            iNo = iNo /10 ;
       }
    }

    
}          
class Question4
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
    
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.PrintDigit(iValue1);
        
       
        
    }    
}
