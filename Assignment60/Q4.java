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

        System.out.println("Enter the Extension");
        String Extension = sobj.nextLine();

        fobj = new File(filename);

        if (fobj.isDirectory() && fobj.exists())
        {
            FilenameFilter filter = new FilenameFilter() 
            {
                public boolean accept(File dir , String str)
                {
                    if (str.endsWith("." + Extension))
                    {
                        return true ;
                    }
                    else
                    {
                        return false ;
                    }
                }    
            };

            fArr = fobj.listFiles(filter);

            if (fArr != null && fArr.length > 0)
            {
               

               for ( iCnt = 0 ; iCnt <fArr.length ; iCnt++)
               {
                    System.out.println("File Name : " + fArr[iCnt].getName());
               }
            }
            else
            {
                System.out.println("Directory doesnt have the file");
            }                           
        }
        else
        {
            System.out.println("Invalid directory path or not a directory");
        }
        
        sobj.close();
    }    
}