import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class Demo   
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter file name: ");
        String FileInput = sobj.nextLine();

        try
        {
            File file = new File(FileInput);
            Scanner fileReader = new Scanner(file);

            System.out.println("File contents:");
            while (fileReader.hasNextLine()) 
            {
                String Line = fileReader.nextLine();
                System.out.println(Line);
            }
            
            fileReader.close();  // Close file scanner
        }
        catch (FileNotFoundException eobj)
        {
            System.out.println("Error: File Not Found Exception is there");
        }
        
        sobj.close();  // Close input scanner
    }
}