/*
    iRow = 4 
    iCol = 4

    DIAGONAL PATTERN
    1       2       3       4
            2       3       4
                    3       4
                            4
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
                    if ( j< i) 
                    {
                        System.out.print(" \t");   
                    } 
                    else
                    {
                        System.out.print(j+"\t");
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

 