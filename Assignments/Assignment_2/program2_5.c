#include<stdio.h>

#define TRUE 1
#define FASLE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FASLE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FASLE;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    printf("Number is Even: %d\n",bRet);
    return 0;
}