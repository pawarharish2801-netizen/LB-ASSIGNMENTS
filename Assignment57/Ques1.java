import java.util.Scanner;
import java.io.File; 
import java.io.FileWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

class Q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First File Name: ");
        String F1 = sobj.nextLine();

        System.out.println("Enter Second File Name: ");
        String F2 = sobj.nextLine();
        
        try 
        {
            File FileSource = new File(F1);
            File FileDest = new File(F2); 

            Path Path1 = Paths.get(F1) ;
            Path Path2 = Paths.get(F2) ;

            Files.copy(Path1, Path2);
            
            System.out.println("File Copied Successfully.");
        }
        catch (Exception eobj)
        {
            System.out.println("Error: " + eobj.getMessage());
        }

        sobj.close();
    }
}