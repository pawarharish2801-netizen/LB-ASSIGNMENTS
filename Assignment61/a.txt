import java.util.*;
import java.io.*;

public class Q3
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileSourceName = null;
        String Str = null;
        File fobj = null;

        System.out.println("Enter the Source File Name");
        FileSourceName = sobj.nextLine();
        fobj = new File(FileSourceName);

        System.out.println("Enter the String");
        Str = sobj.nextLine();

        if (fobj.exists())
        {
            FileWriter fwobj = new FileWriter(fobj, true);  
            fwobj.write(Str);
            fwobj.write("\n"); 
            fwobj.close();
            
            System.out.println("String appended successfully!");
        }
        else
        {
            System.out.println("Source File Doesn't Exist");
        }
        
        sobj.close();
    }
}