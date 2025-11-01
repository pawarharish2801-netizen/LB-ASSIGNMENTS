import java.util.Scanner;

class Logic
{
    
    public boolean CheckLeapYear(int iNo) 
    {
        if(iNo % 4 ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    
}          
class Question1
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
        boolean bRet = false;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        bRet=lobj.CheckLeapYear(iValue1);
        if(bRet == true)
        {
          System.out.println("It's a Leap Year");
        }
        else
        {
            System.out.println("It's not a Leap Year");
        }
       
        
    }    
}
