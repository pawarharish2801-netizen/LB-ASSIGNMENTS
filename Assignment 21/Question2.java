import java.util.Scanner;

class Logic
{
    
    public void CountOddEven(int iNo) 

    {
        int iCnt = 0;
        int iCountOdd = 0;
        int iCountEven = 0;
       
        for (iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        } 
        System.out.println("The Even Number till " + iNo +" is : " + iCountEven);
        System.out.println("The Odd Number till " + iNo +" is : " + iCountOdd);
        
       
    }  
}          
class Question2
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0   ;
       
        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.CountOddEven(iValue1);
      
    }    
}
