import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0 ; 
        for(iCnt=1;iCnt<= iNo ; iCnt++ )  
        {
            System.out.print("#\t");
            System.out.print(iCnt+"\t");
            System.out.print("*\t");

        } 
    }
}
class Q4
{
    public static void main(String[] args) 
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter The Frequency");
        iValue = sobj.nextInt();
        
        pobj.Display(iValue);
       
      

    }
}