import java.util.Scanner;
import java.io.File; 
import java.io.FileWriter;

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

            Scanner FileReader = new Scanner(FileSource);
            FileWriter fileWriter = new FileWriter(FileDest);

            while (FileReader.hasNextLine() == true)  
            {
                String str = FileReader.nextLine();
                fileWriter.write(str);
                fileWriter.write("\n");
            }
            
            FileReader.close();
            fileWriter.close();
            
            System.out.println("File Copied Successfully.");
        }
        catch (Exception eobj)
        {
            System.out.println("Error: " + eobj.getMessage());
        }

        sobj.close();
    }
}