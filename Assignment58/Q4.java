import java.io.File;
import java.io.FileWriter;
import java.util.Scanner; 
public class Q4
{
    public static void main(String[] args) 
    {
        int iCnt = 0 ;
        int FileCount = 0 ;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the directory Name :");
        String Dir = sobj.nextLine() ;

        System.out.println("Enter the file Name :");
        String file = sobj.nextLine();
        try
        {
            File fobj = new File(Dir);

            if (fobj.isDirectory() == false)
            {
                System.out.println("No Directory ");
                return ;
            }
            File[] fArr = fobj.listFiles() ;

            if (fArr.length == 0 )
            {
                System.out.println("No files in directory ");
                return ;
            }

            FileWriter fWriter = new FileWriter(file);

            for (iCnt = 0 ; iCnt < fArr.length ; iCnt++)
            {
                if (fArr[iCnt].isFile() == true)
                {
                    System.out.println("Reading the file : " + fArr[iCnt].getName() + "\n");

                    Scanner fileReader = new Scanner(fArr[iCnt]);

                    fWriter.append("Reading the file : " + fArr[iCnt].getName()) ;
                    while(fileReader.hasNextLine() == true )
                    {
                        String str = fileReader.nextLine() ;
                        fWriter.append( str);
                        fWriter.append("\n") ;
                    }
                    FileCount++ ;
                    fileReader.close();
                }
                
            }
            System.out.println("Successfully Copied : " + FileCount + "Files");
            fWriter.close();
            sobj.close();
            
            
        }
        catch (Exception eobj)
        {
            System.out.println("Error : " + eobj.toString());
        }

    }
}