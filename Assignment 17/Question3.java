import java.util.Scanner;

class Logic
{
    
    public int CheckMax(int iNo1 ,int  iNo2)
    {
        if (iNo1>iNo2)
        {
            return iNo1 ;
        }
        else
        {
            return iNo2;
        }
        
    
        
       
    }
}

class Question3 
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
        int iValue2 = 0 ;
        int iRet = 0 ;
     

        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter your Number :");
        iValue2 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.CheckMax(iValue1,iValue2);

       
        
          System.out.println("The maximum no is : " + iRet);  
        
    }    
}
