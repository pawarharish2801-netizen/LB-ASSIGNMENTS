import java.io.*;
import java.util.*;

class Q1 
{
    public static void main(String[] args) throws Exception
    {
        int iRet = 0 ; 
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Source File Name : ");
        String SName = sobj.nextLine() ;
        File Sobj = new File(SName);

        System.out.println("Enter Destination File Name :");
        String DName = sobj.nextLine() ;

        if(Sobj.exists())
        {
             FileInputStream fiobj = new FileInputStream(SName) ;
            FileOutputStream fdobj = new FileOutputStream(DName) ;

            byte buffer[] = new byte[1024];

            while ((iRet = fiobj.read(buffer, 0, buffer.length)) != -1)
            {
                fdobj.write(buffer ,0 , iRet);
            }
        }
       
        else
        {
            System.out.println("Error : Source File Doesn't Exists !!");
        }
        


        
        
        
        sobj.close();
    }   
}