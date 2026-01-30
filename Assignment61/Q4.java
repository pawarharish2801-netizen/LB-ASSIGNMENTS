import java.util.*;
import java.io.*;

public class Q4
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FirstFileName = null;
        String SecondFileName = null;
        String FileOutputName = null;
        File f1obj = null;
        File f2obj = null;
        File fobj = null;
        byte Buffer[] = new byte[1024];
        int iRet = 0;

        System.out.println("Enter the first File Name: ");
        FirstFileName = sobj.nextLine();
        f1obj = new File(FirstFileName);

        System.out.println("Enter the Second File Name: ");
        SecondFileName = sobj.nextLine();  
        f2obj = new File(SecondFileName);   

        System.out.println("Enter the Destination File Name: ");
        FileOutputName = sobj.nextLine();  
        fobj = new File(FileOutputName);    

        if (f1obj.exists() && f2obj.exists())
        {
            FileInputStream fi1obj = new FileInputStream(f1obj);
            FileInputStream fi2obj = new FileInputStream(f2obj);
            FileOutputStream foobj = new FileOutputStream(fobj);

            while ((iRet = fi1obj.read(Buffer, 0, Buffer.length)) != -1) 
            {
                foobj.write(Buffer, 0, iRet);
            }

            
            byte[] separator = "\n--- FILE SEPARATOR ---\n".getBytes();  
            foobj.write(separator, 0, separator.length);             

            while ((iRet = fi2obj.read(Buffer, 0, Buffer.length)) != -1)  
            {
                foobj.write(Buffer, 0, iRet);
            }

            System.out.println("Files merged successfully!");
            System.out.println("Output file: " + FileOutputName);

            fi1obj.close();
            fi2obj.close();
            foobj.close();
        }
        else
        {
            System.out.println("Error: One or both source files don't exist!");
        }
        
        sobj.close();
    }
}