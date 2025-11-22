import java.util.*;
class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0 , j = 0 , iOdd = 0 , iEven = 0 ; 
        
        for (i = 1; i<=iRow ; i++)
        { 
            if(i % 2 != 0)
            {
                for (j=1 , iEven = 2 ; j<=iCol ; j++  )
                {
                    System.out.print(iEven+"\t"); 
                    iEven = iEven + 2;
                }
            }
            else
            {
               for (j=1 , iOdd = 1 ; j<=iCol ; j++  )
                {
                    System.out.print(iOdd+"\t"); 
                    iOdd= iOdd +2;
                } 
            }
            System.out.println();
    }
    }
}

class Q2
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