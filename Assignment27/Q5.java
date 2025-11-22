import java.util.*;
class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0 , j = 0 , iCnt = 0; 

        for (i = 1; i<=iRow+1 ; i++)
        {
            
            for(j=1; j<=iCol ; j++ )  
            {
                System.out.print(i+"\t");
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