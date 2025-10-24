#include<stdio.h>
int main()
{
    float uc,tb,fm=50.00;
    printf("enter number of units ::");
    scanf("%f",&uc);

    if(uc<=100)
    {
        tb=uc*3.00;
    }else if(uc>=101 && uc<=200)
    {
        tb=uc*4.50;
    }else if (uc>=201 && uc<=300)
    {
        tb=uc*6.00;
    }else{
        tb=uc*8.00;
    }
    tb+=50;
    printf("------Electricity bill -------\n");
    printf("Total Cost for the %f is:::%.2f ",uc,tb);
    return 0;
}
