import java.util.Scanner;

class Logic
{
    
    public void CheckSign(int iNo) 
    {
        if(iNo > 0)
        {
            System.out.println("The Number is Positive");
        }

        if(iNo<0)
        {
            System.out.println("The Number is Negative");
        }

        if(iNo ==0)
        {
             System.out.println("The Number is zero");
        }
    }

    
}          
class Question5
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
       ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

      lobj.CheckSign(iValue1);
       
        
    }    
}
