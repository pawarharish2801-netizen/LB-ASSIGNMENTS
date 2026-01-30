import java.util.*;
import java.io.*;

public class Q3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        long iSize = 0;
        int iCnt = 0;
        int iIndex = 0;
        File fobj = null;
        File fArr[] = null;
        
        System.out.println("Enter the directory Name");
        String filename = sobj.nextLine();

        fobj = new File(filename);

        if (fobj.isDirectory() && fobj.exists())
        {
            fArr = fobj.listFiles();
            
            if (fArr != null && fArr.length > 0)
            {
                iSize = fArr[0].length();
                iIndex = 0;
                
                for (iCnt = 0; iCnt < fArr.length; iCnt++)
                {
                    if (fArr[iCnt].isFile() && fArr[iCnt].length() < iSize)
                    {
                        iSize = fArr[iCnt].length();
                        iIndex = iCnt;
                    }
                }

                System.out.println("The file with smallest size is : " + 
                    fArr[iIndex].getName() + " and size is : " + 
                    fArr[iIndex].length() + " bytes");
            }
            else
            {
                System.out.println("Directory is empty");
            }
        }
        else
        {
            System.out.println("Invalid directory path or not a directory");
        }
        
        sobj.close();
    }    
}