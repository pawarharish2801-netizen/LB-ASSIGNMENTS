import java.util.*;
class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0 , j = 0 , iCnt = 0 ; 
        char C = '\0';
        
        for (i = 1 , iCnt = 1; i<=iRow ; i++ , iCnt++)
        { 
            for (j=iCnt; j< (iCol+iCnt) ; j++  )
            {
                System.out.print(j+"\t"); 
            }
            System.out.println();
        }
    }
}

class Q5
{
    public static void main(String[] args) 
    {
        int iValue1 = 0 , iValue2 = 0;
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter The Rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter The Columns");
        iValue2 = sobj.nextInt();
        
        pobj.Display(iValue1 , iValue2);

    }
} 