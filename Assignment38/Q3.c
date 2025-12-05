    
    #include<stdio.h>

    void StrCpySmall(char *src, char *dest)
    {
        int iCnt = 0, jCnt = 0;
        
        iCnt = 0;
        while (src[iCnt] != '\0')
        {
            if(src[iCnt] >= 'A' && src[iCnt] <= 'Z')
            {
                dest[jCnt] = src[iCnt]+32;  
            }
            else 
            {
                dest[jCnt] = src[iCnt];  
            }
            jCnt++;
            iCnt++;
        }
        dest[jCnt] = '\0';
    }
    int main()
    {
        char arr[30];
        char brr[30];
        char cValue = '\0';

        printf("Enter the string: ");
        scanf("%[^\n]s", arr);
        
        StrCpySmall(arr, brr);
        printf("%s", brr);
        
        return 0;
    }