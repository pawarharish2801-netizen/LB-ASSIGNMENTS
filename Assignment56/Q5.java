import java.util.Scanner;
import java.io.File;

public class Q5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Directory Name: ");
        String Name = sobj.nextLine();
        
        File file = new File(Name);
        
        // Check if it's a valid directory
        if(file.isDirectory() == true)
        {
            File[] fileList = file.listFiles();
            
            if(fileList != null)
            {
                System.out.println("\nFiles in directory:");
                System.out.println("-------------------");
                
                // Traditional for loop (same thing)
                for(int i = 0; i < fileList.length; i++)
                {
                    File f = fileList[i];
                    System.out.println(f.getName());
                }
                
                System.out.println("\nTotal files: " + fileList.length);
            }
            else
            {
                System.out.println("Unable to access directory!");
            }
        }
        else
        {
            System.out.println("Error: Not a valid directory!");
        }

        sobj.close();
    }    
}
