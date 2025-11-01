import java.util.Scanner;

class Logic
{
    
    public int CheckMax(int iNo1 ,int  iNo2, int iNo3) 
    {
        if (iNo1<iNo2 && iNo1<iNo3)
        {
            return iNo1;
        }

        else if(iNo2<iNo1 && iNo2<iNo3)
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
        
    
        
       
    }
}          
class Question4
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
        int iValue2 = 0 ;
        int iValue3 = 0 ;
        int iRet = 0 ;
     

        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter your Number :");
        iValue2 = sobj.nextInt();

        System.out.println("Enter your Number :");
        iValue3 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.CheckMax(iValue1,iValue2,iValue3);

       
        
          System.out.println("The minimum no is : " + iRet);
        
    }    
}
