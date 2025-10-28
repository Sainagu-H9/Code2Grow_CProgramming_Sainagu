#include <stdio.h>
int main(){
    int age, health;
    char gender;
    float pre = 0;

    printf("Enter the age of the person: ");
    scanf("%d",&age);

    if(age >= 100){
        printf("Age is 100 or more — Not eligible for health premium\n");
        return 0;
    }

    printf("Enter the person's gender (M/F): ");
scanf(" %c",&gender);
if (gender!='M' && gender!='m' && gender!='F' && gender!='f')
{
    printf("-----invalid input-----");
    return 0;
}

printf("Health condition (1 = Healthy / 0 = Unhealthy): ");
scanf("%d",&health);
if (health!=1 && health!=0)
{
    printf("-----invalid input-----");
    return 0;
}

    

    // -------- Age & Health Logic ----------
    if(age < 25) {
        if(health == 1)
            pre = 5000;
    }
    else if(age >= 25 && age <= 40) {
        if(health == 1)
            pre = 7000;
        else
            pre = 9500;
    }
    else if(age >= 41 && age <= 60) {
        if(health == 1)
            pre = 10000;
        else
            pre = 13000;
    }
    else if(age > 60) {
        if(health == 1)
            pre = 15000;
        else {
            printf("\nCustomer Details: \n");
            printf("Age: %d\n", age);
            printf("Gender: %c\n", gender);
            printf("Health: Unhealthy\n");
            printf("Status: Not Eligible for Insurance\n");
            return 0;
        }
    }

    // -------- Gender Discount -------------
    if(gender == 'F' || gender == 'f') {
        pre = pre - (pre * 0.10);
    }

    // -------- Output -------------
    printf("\n------ Customer Details ------\n");
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Health: %s\n", (health==1) ? "Healthy" : "Unhealthy");
    printf("Final Premium: ₹%.2f\n", pre);

    return 0;
}
