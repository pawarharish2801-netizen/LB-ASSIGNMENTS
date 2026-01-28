import java.util.Scanner;
import java.nio.file.Files ;
import java.nio.file.Paths;
import java.nio.file.Path;

class Q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File Name: ");
        String F1 = sobj.nextLine();

        Path path = Paths.get(F1);

        boolean bRet = false ;
        bRet = Files.isRegularFile(path);

        if (bRet == true)
        {
            System.out.println("The File is Regular File");
        }
        else
        {
            System.out.println("The File is not Regular File");
        }
    }
}