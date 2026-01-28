import java.util.Scanner;
import java.io.FileInputStream;
import java.security.MessageDigest;

public class Q4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter File Name: ");
        String fileName = sobj.nextLine();
        
        try 
        {
            // Create FileInputStream to read file
            FileInputStream fis = new FileInputStream(fileName);
            
            // Create MessageDigest instance for MD5
            MessageDigest md = MessageDigest.getInstance("MD5");
            
            // Read file in chunks
            byte[] byteArray = new byte[1024];
            int bytesRead = 0;
            
            while ((bytesRead = fis.read(byteArray)) != -1) 
            {
                md.update(byteArray, 0, bytesRead);
            }
            
            fis.close();
            
            // Get the hash's bytes
            byte[] digest = md.digest();
            
            // Convert bytes to hexadecimal format
            StringBuilder checksum = new StringBuilder();
            for (byte b : digest) 
            {
                checksum.append(String.format("%02x", b));
            }
            
            System.out.println("Checksum (MD5): " + checksum.toString());
        }
        catch (Exception eobj) 
        {
            System.out.println("Error: " + eobj.getMessage());
        }
        
        sobj.close();
    }
}