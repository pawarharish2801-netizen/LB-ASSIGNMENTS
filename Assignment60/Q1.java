import java.util.*;
import java.io.* ;

public class Q1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        long iSize = 0 ;
        int iCnt = 0 ;
        File fobj = null ;
        File fArr[] = null ;
        
        System.out.println("Enter the directory Name");
        String filename = sobj.nextLine() ;

        fobj = new File(filename);

        if (fobj.isDirectory() && fobj.exists())
        {
            fArr = fobj.listFiles() ;

            for (iCnt = 0 ; iCnt<fArr.length ;iCnt++)
            {
                iSize = iSize + fArr[iCnt].length() ;
            }

            System.out.println("The total file size is : " + iSize + " bytes");
        }
    }    
}
