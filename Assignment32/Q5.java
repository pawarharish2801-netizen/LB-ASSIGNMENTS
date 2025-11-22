/*
    iRow = 4 
    iCol = 4

    DIAGONAL PATTERN
    1       2       3       4       5
    1       2                       5
    1               3               5
    1                       4       5
    1       2       3       4       5

*/

import java.util.* ;

class Pattern       
{
    //FILTER FOR SQUARE MATRIX
    public void Display(int iRow , int iCol)
    {
        int i = 0 , j = 0;
        if(iRow != iCol)
        {
            System.out.println("Invalid Input");
            System.out.println("Row number and column number should be same");
            return ;
        }
        
        for (i=1 ; i<=iRow ; i++)
        {
                for(j = 1 ; j<=iCol ; j++ )
                {   
                    if ( i == j || i == 1 || j == 1 || i == iRow || j==iCol)
                    {
                        System.out.print(j+"\t");    
                    }
                    
                    else
                    {
                        System.out.print("\t");
                    }
                  
                }
            

            System.out.println();
        }
    }
}
class Q5
{
    public static void main(String A[]) 
    {
        int iValue1 = 0 , iValue2= 0 ;  
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Number of Columns");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1 , iValue2);

    }
}

 