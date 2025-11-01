import java.util.Scanner;

class Logic
{
    
    public boolean CheckPrime(int iNo) 

    {
        int iCnt = 0;
        
        for (iCnt = 2 ; iCnt<=iNo/2 ; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                return false;
            }      
        }   
        return true; 
    }  
}          
class Question1
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
        boolean bRet = false ;
     
      
     

        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

       

        Logic lobj = new Logic();

        bRet = lobj.CheckPrime(iValue1);

         if(bRet == true)
        {
            System.out.println("The Number is Prime");
        }
        else
        {
           System.out.println("The Number is  not Prime"); 
        }
       

       
        
         
        
    }    
}
