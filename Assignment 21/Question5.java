import java.util.Scanner;

class Logic
{
    
    public void DisplayDivisible(int iNo) 
    {
        int iCnt = 0;   
        int iCount = 0 ;
        for (iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            if (iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);
            }
        }
       
       
    }  
}          
class Question5
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.DisplayDivisible(iValue1);

        
      
    }    
}
