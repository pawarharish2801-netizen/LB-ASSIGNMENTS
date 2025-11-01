import java.util.Scanner;

class Logic
{
    
    public void CheckGrade(int iNo) 
    {
        if(iNo<=30)
        {
           System.out.println("Fail");
        }
        else if( iNo>30  && iNo<=50)
        {
           System.out.println("Grade C");
        }
        else if( iNo > 50 && iNo <=70)
        {
           System.out.println("Grade B");
        }
        else if( iNo>70 && iNo<=90)
        {
           System.out.println("Grade A");
        }
        else
        {
            System.out.println("Grade A+");
        }
        
    }

    
}          
class Question2
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
       
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.CheckGrade(iValue1);
       
       
        
    }    
}
