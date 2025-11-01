import java.util.Scanner;

class Logic
{
    
    public void PrinRev(int iNo) 

    {
        int iCnt = 0;
       
        for (iCnt = iNo ; iCnt>=1 ; iCnt--)
        {
            System.out.println(iCnt);
        } 
        
       
    }  
}          
class Question2
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0   ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.PrinRev(iValue1);
      
    }    
}
