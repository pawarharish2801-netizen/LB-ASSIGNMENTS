import java.util.Scanner;

class Logic
{
    
    public boolean CheckPrime(int iNo) 

    {
        int iCnt = 0;
        
        for (iCnt = 2 ; iCnt<=iNo ; iCnt= iCnt+2)
        {
            System.out.println(iCnt);     
        }   
        return true; 
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

        lobj.CheckPrime(iValue1);

        
       

       
        
         
        
    }    
}
