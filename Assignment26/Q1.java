import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0 ;
        char C ='A';
        for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt ==1)
            {
                System.out.print(C+"\t");
                C++;
            }
            else
            {
             System.out.print(C+"\t");
             C++;
            }
        
    }
}
}
class Q1   
{
    public static void main(String[] args) 
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter The Frequency");
        iValue = sobj.nextInt();
        if(iValue<=26)
        {
        pobj.Display(iValue);
        }
        else
        {
            System.out.println("Numbers Exceeds the Alphabet Limit");
        }
        
      

    }
}