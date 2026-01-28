import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class Q1 {
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        
        // Get filename from user
        System.out.print("Enter the file name: ");
        String fileName = input.nextLine();
        
        try 
        {
            // Create File object
            File file = new File(fileName);
            
            // Open and read the file
            Scanner fileReader = new Scanner(file);

            System.out.println("File Opened Successfully");
            
            fileReader.close();

            System.out.println("FIle closed Successfully");
            
        } 
        
        catch (FileNotFoundException e) 
        {
            System.out.println("Error: File not found!");
            e.printStackTrace();
        }
    
    }
}