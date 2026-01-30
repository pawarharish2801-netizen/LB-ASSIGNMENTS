import java.util.*;
import java.io.*;

public class Q5
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String MergedFileName = null;
        String FirstOutputFile = null;
        String SecondOutputFile = null;
        
        System.out.println("Enter the merged File Name: ");
        MergedFileName = sobj.nextLine();
        
        System.out.println("Enter the first output File Name: ");
        FirstOutputFile = sobj.nextLine();
        
        System.out.println("Enter the second output File Name: ");
        SecondOutputFile = sobj.nextLine();
        
        File fMerged = new File(MergedFileName);
        
        if (fMerged.exists())
        {
            FileInputStream fiobj = new FileInputStream(fMerged);
            
            byte[] allData = new byte[(int)fMerged.length()];
            fiobj.read(allData);
            fiobj.close();
            
            String content = new String(allData);
            String separator = "\n--- FILE SEPARATOR ---\n";
            
            // Find separator position
            int separatorIndex = content.indexOf(separator);
            
            if (separatorIndex != -1)
            {
                String firstFileContent = content.substring(0, separatorIndex);
                
                String secondFileContent = content.substring(separatorIndex + separator.length());
                

                FileOutputStream fo1obj = new FileOutputStream(FirstOutputFile);
                fo1obj.write(firstFileContent.getBytes());
                fo1obj.close();
                
                FileOutputStream fo2obj = new FileOutputStream(SecondOutputFile);
                fo2obj.write(secondFileContent.getBytes());
                fo2obj.close();
                
                System.out.println("Files split successfully!");
                System.out.println("Created: " + FirstOutputFile + " (" + firstFileContent.length() + " bytes)");
                System.out.println("Created: " + SecondOutputFile + " (" + secondFileContent.length() + " bytes)");
            }
            else
            {
                System.out.println("Error: Separator not found in merged file!");
            }
        }
        else
        {
            System.out.println("Error: Merged file doesn't exist!");
        }
        
        sobj.close();
    }
}
