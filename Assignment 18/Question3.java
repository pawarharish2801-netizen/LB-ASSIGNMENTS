import java.util.Scanner;

class Logic
{
    
    public void PrintOdd(int iNo) 

    {
        int iCnt = 0;
        
        for (iCnt = 1 ; iCnt<=iNo ; iCnt= iCnt+2)
        {
            System.out.println(iCnt);     
        }   
       
    }  
}          
class Question3
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.PrintOdd(iValue1);
    }    
}
