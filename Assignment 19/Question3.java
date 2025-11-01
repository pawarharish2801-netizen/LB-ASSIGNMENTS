import java.util.Scanner;

class Logic
{
    
    public boolean CheckDivisible(int iNo) 
    {
        if(iNo % 5 ==0 || iNo % 11 ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    
}          
class Question3
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
        boolean bRet = false;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        bRet=lobj.CheckDivisible(iValue1);
        if(bRet == true)
        {
          System.out.println("It's divisible by 5 or 11");
        }
        else
        {
            System.out.println("It's not divisible by 5 or 11");
        }
       
        
    }    
}
