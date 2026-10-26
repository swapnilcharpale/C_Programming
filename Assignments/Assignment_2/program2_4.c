#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter a Number: \n");
    scanf("%d",&iValue);

    printf("Enter a Frequency: \n");
    scanf("%d",&iCnt);  

    Display(iValue, iCnt);

    return 0;
}