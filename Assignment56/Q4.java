import java.util.Scanner;
import java.io.File;
import java.io.IOException;

public class Q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the File Name: ");
        String Name = sobj.nextLine();
        
        try
        {
            File file = new File(Name);
            
            if(file.createNewFile() == true)  
            {
                System.out.println("File created successfully: " + file.getName());
            }
            else
            {
                System.out.println("File already exists.");
            }
        }
        catch (IOException eobj)  // More specific exception
        {   
            System.out.println("Error: " + eobj.getMessage());
        }

        sobj.close();
    }    
}
