import java.io.*;
import java.util.*;

class Q2 
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Source File Name: ");
        String SourceFile = sobj.nextLine();
        
        File fSource = new File(SourceFile);
        
        if (!fSource.exists())
        {
            System.out.println("Error: Source file doesn't exist!");
            sobj.close();
            return;
        }
        
        System.out.println("Enter Destination File Name (Normal): ");
        String DestNormal = sobj.nextLine();
        
        System.out.println("Enter Destination File Name (Buffered): ");
        String DestBuffered = sobj.nextLine();
        
        // ========== NORMAL STREAM COPY ==========
        long startNormal = System.currentTimeMillis();
        
        FileInputStream fisNormal = new FileInputStream(SourceFile);
        FileOutputStream fosNormal = new FileOutputStream(DestNormal);
        
        int byteRead;
        while ((byteRead = fisNormal.read()) != -1)
        {
            fosNormal.write(byteRead);
        }
        
        fisNormal.close();
        fosNormal.close();
        
        long endNormal = System.currentTimeMillis();
        long timeNormal = endNormal - startNormal;
        
        // ========== BUFFERED STREAM COPY ==========
        long startBuffered = System.currentTimeMillis();
        
        FileInputStream fisBuffered = new FileInputStream(SourceFile);
        FileOutputStream fosBuffered = new FileOutputStream(DestBuffered);
        
        BufferedInputStream bisBuffered = new BufferedInputStream(fisBuffered);
        BufferedOutputStream bosBuffered = new BufferedOutputStream(fosBuffered);
        
        while ((byteRead = bisBuffered.read()) != -1)
        {
            bosBuffered.write(byteRead);
        }
        
        bisBuffered.close();
        bosBuffered.close();
        
        long endBuffered = System.currentTimeMillis();
        long timeBuffered = endBuffered - startBuffered;
        
        // ========== DISPLAY RESULTS ==========
        System.out.println("\n========== PERFORMANCE COMPARISON ==========");
        System.out.println("File Size: " + fSource.length() + " bytes");
        System.out.println("\nNormal Stream Copy:");
        System.out.println("  Time Taken: " + timeNormal + " milliseconds");
        System.out.println("  Output File: " + DestNormal);
        
        System.out.println("\nBuffered Stream Copy:");
        System.out.println("  Time Taken: " + timeBuffered + " milliseconds");
        System.out.println("  Output File: " + DestBuffered);
        
        System.out.println("\n========== ANALYSIS ==========");
        if (timeBuffered < timeNormal)
        {
            double improvement = ((double)(timeNormal - timeBuffered) / timeNormal) * 100;
            System.out.println("Buffered Stream is FASTER by " + String.format("%.2f", improvement) + "%");
            System.out.println("Speed up: " + (timeNormal / timeBuffered) + "x faster");
        }
        else
        {
            System.out.println("Normal Stream was faster (file might be too small to show difference)");
        }
        
        sobj.close();
    }
}
