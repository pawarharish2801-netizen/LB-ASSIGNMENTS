import java.util.Scanner;

class Logic
{
    
    public void TableMaker(int iNo) 

    {
        int iCnt = 0;
        int iMultiple = iNo;
        int iTable = 1 ;
        for (iCnt = 1 ; iCnt<=10 ; iCnt++)
        {
            iTable = iMultiple * iCnt ;
            System.out.println(iTable);
        }    
    }  
}          
class Question5
{
    public static void main(String[] args) 
    {
        
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ;
     
      
     

        System.out.println("Enter your Number :");
        iValue1 = sobj.nextInt();

       

        Logic lobj = new Logic();

        lobj.TableMaker(iValue1);

       
        
         
        
    }    
}
