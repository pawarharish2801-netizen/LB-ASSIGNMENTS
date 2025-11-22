import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0 ; 
        for(iCnt=iNo ;iCnt>= 1 ; iCnt-- )  
        {
            System.out.print(iCnt+"\t");
            System.out.print("#\t");

        } 
    }
}
class Q2   
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