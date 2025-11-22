import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0 ;
        int iTable =0; 
        //Time Complexity = O(n)
        for(iCnt=1 , iTable =2 ;iCnt<= iNo ; iCnt++  )  
        {
            System.out.print(iTable+"\t");
            iTable = iTable + 2;
        } 
    }
}
class Q5
{
    public static void main(String[] args) 
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter The Frequency");
        iValue = sobj.nextInt();
        if(iValue==0)
        {
            System.out.println("0");
        }
        else
        {
            pobj.Display(iValue);
        }
        
      

    }
}