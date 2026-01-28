import java.util.Scanner;
import java.nio.file.Files ;
import java.nio.file.Paths;
import java.nio.file.Path; 
import java.io.File;

public class Q5
{
    public static void main(String[] args) 
    {
        System.out.println("Enter Directory Name ");
        Scanner sobj = new Scanner(System.in);
        
        String DirName = sobj.nextLine();

        try 
        {
           File file = new File(DirName);

           File[] fileArr = file.listFiles();

           for (int i = 0 ; i<fileArr.length ;i++ )
           {
                String str = fileArr[i].getName();
                long size = fileArr[i].length();
                System.out.print(str +"            :  " + size + "bytes");
                System.out.println();
           }

        }
        catch(Exception eobj)
        {
            System.out.println("Error : " + eobj.getLocalizedMessage());
        }
       
        sobj.close();

    

    }    
}
