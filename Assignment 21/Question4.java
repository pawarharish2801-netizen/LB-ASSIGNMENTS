import java.util.Scanner;

class Logic
{
    
    public int TotalFactor(int iNo) 
    {
        int iCnt = 0;   
        int iCount = 0 ;
        for (iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                iCount = iCount +1;
            }
        }
        return iCount;
       
    }  
}          
class Question4
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0   ,iRet = 0;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.TotalFactor(iValue1);

        System.out.println(" The Total No of Factors are : "+iRet);
      
    }    
}
