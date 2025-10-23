#include<stdio.h>
int main()
{
    float mealcost,totalbill,person1_share,person2_share,person3_share;
    float tax=0.05,tip=0.10;
    printf("enter the mealcost:");
    scanf("%f",&mealcost);
    totalbill=mealcost+(mealcost*tax)+(mealcost*tip);
    printf("totalbill:%f\n",totalbill);
    person1_share=totalbill/2;//sharing person3_share
    person2_share=totalbill/2;//sharing person3_share
    person3_share=0;// forgot wallet
    printf("each person should pay as follows:\n");
    printf("person1_share:%f\n",person1_share);
    printf("person2_share:%f\n",person2_share);
    printf("person3_share:%f\n",person3_share);
    return 0;
}


    
