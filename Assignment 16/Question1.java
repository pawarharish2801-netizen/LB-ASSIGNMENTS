import java.util.Scanner;
class Logic
{
    public int iSum = 0;
    public int iCnt = 0 ;

    public void Sum(int iNo)
    {
        for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            iSum = iSum + iCnt ;
            
        }
        System.out.println(iSum);
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Your Number");
        iValue = sobj.nextInt();

        Logic lObj = new Logic();

        lObj.Sum(iValue);
        




    }
}