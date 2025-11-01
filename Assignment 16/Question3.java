import java.util.Scanner;

class Factorial 
{
    public int iCnt = 0;
    public int iFactorial = 1;

    public int Factor(int iNo)
    {
        for (iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            iFactorial = iCnt * iFactorial ;
        }
        return iFactorial;
    }
}
class Question3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0 ;
        int iRet = 0 ;

        System.out.println("Enter your Number :");
        iValue = sobj.nextInt();

        Factorial fobj = new Factorial();

        iRet = fobj.Factor(iValue);

        System.out.println("The factorial is :"+  iRet);




    }
    
}
