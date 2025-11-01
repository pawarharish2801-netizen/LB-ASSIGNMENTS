import java.util.Scanner;

class Logic
{
    
    public void PrintFactor(int iNo) 
    {
        int iCnt = 0;   
        for (iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
 
                System.out.println(iCnt);
            }
        }
        
       
    }  
}          
class Question3
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0   ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.PrintFactor(iValue1);
      
    }    
}
