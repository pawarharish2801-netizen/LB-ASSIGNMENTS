import java.util.*;
import java.io.*;

public class Q5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        File fobj = null;
        
        System.out.println("Enter the File Name");
        String filename = sobj.nextLine();

        fobj = new File(filename);

        if (fobj.exists())
        {
            System.out.println("File exists ");

            if (fobj.isDirectory())
            {
                System.out.println("The file is a directory");
            }
            
            if (fobj.isFile())
            {
                System.out.println("The file is a File");
            }
        }
        else
        {
            System.out.println("Invalid directory path or not a directory");
        }
        
        sobj.close();
    }    
}