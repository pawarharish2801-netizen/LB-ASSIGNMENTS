import java.io.FileReader;
import java.util.Scanner;
import java.io.File; 
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.Path;

public class Q1 
{
    public static void main(String[] args) 
    {
        int iCnt = 0 ;
        Scanner sobj = new Scanner((System.in));

        System.out.println("Enter the directory name : ");
        String DName = sobj.nextLine() ;

        File fobj = new File(DName);

        if (fobj.exists() == false || fobj.isDirectory() ==false)
        {
            System.out.println("Invalid directory!");
            sobj.close();
            return ;
        }
        
        File[] FileList = fobj.listFiles();

        for(iCnt = 0 ; iCnt < FileList.length ; iCnt++)
        {
            Path path = FileList[iCnt].toPath();

            if ( Files.isRegularFile(path) == true)
            {
                System.out.println(FileList[iCnt].getName());
            }
        }
        

        sobj.close();

        

    

    }   
}
