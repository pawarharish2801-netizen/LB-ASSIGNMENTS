import java.util.Scanner;

/*
 
2^2= 2 *2
2^3 = 2*2*2
2^4 = 2*2*2*2

 */
class Logic
{
    
    public int DisplayPower(int iNo1 , int iNo2) 
    {
       
        int iCnt = 0 ;
        if (iNo2 ==1)
        {
            return iNo1;
        }

        int iPower =1 ;
        for(iCnt = 1 ; iCnt<=iNo2 ; iCnt++)
        {
            iPower = iPower * iNo1  ;
        }
        return iPower;
       
    }

    
}          
class Question5
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ,iValue2 = 0 ,iRet = 0;
    
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

         System.out.println("Enter your Power :");
        iValue2 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.DisplayPower(iValue1,iValue2);
        System.out.println("The answer is : "+iRet);
        
       
        
    }    
}
