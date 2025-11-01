    import java.util.Scanner;

class Logic
{
    
    public int FindProduct(int iNo) 

    {
        int iDigit = 0 ;
        int iProduct = 0;
        iProduct = 1;

        while (iNo !=0)
        {
            iDigit = iNo % 10;
            iNo = iNo /10 ;
            iProduct = iProduct * iDigit ;
        }
       return iProduct;
    }  
}          
class Question1
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iRet = 0   ;
        
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.FindProduct(iValue1);
        System.out.println("The Product of Digit is : "+iRet);
        
    }    
}
