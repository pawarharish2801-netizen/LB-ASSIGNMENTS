import java.util.Scanner;

class Logic
{
    
    public int PrintEven(int iNo) 

    {
        int iCnt = 0;
        int iSum = 0;
        for (iCnt = 2 ; iCnt<=iNo ; iCnt= iCnt+2)
        {
            iSum = iSum + iCnt ;
               
        } 
        return iSum; 

       
    }  
}          
class Question1
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iRet = 0 ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.PrintEven(iValue1);
        System.out.println("The sum is " +iRet);  
    }    
}
