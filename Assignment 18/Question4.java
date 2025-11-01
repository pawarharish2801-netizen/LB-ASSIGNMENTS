import java.util.Scanner;

class Logic
{
    
    public int SumEven(int iNo) 

    {
        int iDigit = 0;
        int iSumEven = 0;
        
        while(iNo !=0)
        {
            iDigit = iNo %10;
            iNo = iNo /10 ;
            if(iDigit%2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
        } 
        return iSumEven; 
       
    } 
     public int SumOdd(int iNo) 

    {
        int iDigit = 0;
        int iSumOdd = 0;
        
        while(iNo !=0)
        {
            iDigit = iNo %10;
            iNo = iNo /10 ;
            if(iDigit%2 != 0)
            {
                iSumOdd = iSumOdd + iDigit;
            }
        } 
        return iSumOdd; 
       
    } 
}          
class Question4
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
        int iRet1 = 0 , iRet2 = 0 ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet1 = lobj.SumEven(iValue1);
        System.out.println("The Sum of Even is " +iRet1);

        iRet2 = lobj.SumOdd(iValue1);
        System.out.println("The Sum of Odd is " +iRet2);
        
    }    
}
