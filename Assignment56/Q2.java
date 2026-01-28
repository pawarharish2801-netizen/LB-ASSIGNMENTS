import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Q2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        // Get filename from user
        System.out.print("Enter the file name: ");
        String fileName = sobj.nextLine();
        
        try 
        {
            // Create File object
            File file = new File(fileName);
            
            // Open and read the file
            Scanner fileReader = new Scanner(file);
            
            System.out.println("File contents:");
            // Read and display file contents
            while (fileReader.hasNextLine()) 
            {
                String line = fileReader.nextLine();
                System.out.println(line);
            }
            
            fileReader.close();
            
        } 
        catch (FileNotFoundException e) 
        {
            System.out.println("Error: File not found!");
            e.printStackTrace();
        }
        
        sobj.close();
    }
}