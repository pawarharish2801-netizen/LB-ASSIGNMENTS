import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Q3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the File Name: ");
        String Name = sobj.nextLine();

        System.out.println("Enter the String that you want to write:");
        String str = sobj.nextLine();
        
        try
        {
            FileWriter fwObj = new FileWriter(Name);
            fwObj.write(str);      
            fwObj.close();         
            
            System.out.println("Successfully written to file!");
        }
        catch (IOException iobj)
        {
            System.out.println("Error: " + iobj.getMessage());
        }
        
        sobj.close();  // Good practice
    }    
}