import java.util.Scanner;
import java.nio.file.Files ;
import java.nio.file.Paths;
import java.nio.file.Path; 

public class Q3 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter Directory Name ");
        Scanner sobj = new Scanner(System.in);
        
        String DirName = sobj.nextLine();

        Path path = Paths.get(DirName);
        try 
        {
           Files.createDirectories(path);
           System.out.println(" File Successfully Created at : "+ path.toAbsolutePath());
        }
        catch(Exception eobj)
        {
            System.out.println("Error : " + eobj.getLocalizedMessage());
        }
       
        sobj.close();

    

    }    
}
