    import java.util.Scanner;

class Logic
{
    
    public boolean CheckPerfect(int iNo) 

    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1 ; iCnt<= (iNo/2) ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
            iSum = iCnt + iSum ;
            }
        }

        if (iNo == iSum)
        {
            return true;
        }
        else
        {
            return false;
        }
        
       
    }  
}          
class Question3
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0   ;
        boolean bRet = false;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.CheckPerfect(iValue1);
        if(bRet == true)
        {
            System.out.println("The number is perfect");
        }
        else
        {
            System.out.println("The number is not perfect");
        }
    }    
}
