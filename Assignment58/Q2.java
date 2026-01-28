import java.util.Scanner;
import java.io.File; 
import java.io.FileWriter;
import java.io.IOException;

public class Q2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        // Taking Inputs
        System.out.println("Enter the directory name: ");
        String DName = sobj.nextLine();

        System.out.println("Enter the File name: ");
        String FName = sobj.nextLine();

        try
        {
            // File Instance Creation
            File fobj = new File(DName);

            // ✅ Check directory BEFORE creating FileWriter
            if (!fobj.exists() || !fobj.isDirectory())
            {
                System.out.println("Invalid directory!");
                sobj.close();
                return;
            }
            
            File[] FileList = fobj.listFiles();
            
            if (FileList == null)
            {
                System.out.println("Unable to read directory!");
                sobj.close();
                return;
            }

            // ✅ Create FileWriter AFTER validation
            FileWriter tobj = new FileWriter(FName);
            
            // Write file names
            for (int iCnt = 0; iCnt < FileList.length; iCnt++)
            {
                String str = FileList[iCnt].getName();
                tobj.write(str);
                tobj.write("\n");
            }
            
            tobj.close();
            System.out.println("File names written to '" + FName + "' successfully!");
        }
        catch(IOException iobj)
        {
            System.out.println("Error: " + iobj.getMessage());
        }

        sobj.close();
    }   
}