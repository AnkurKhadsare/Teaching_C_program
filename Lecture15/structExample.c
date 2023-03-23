#include <stdio.h>

int main()
{
    struct car
    {
        char model[20];
        int rpm;
        int avg;
        float hp;
    };

    struct car BMW;

    //struct car BMW={"E256",2000,15,30};
    printf("Enter the model name : ");
    scanf("%s", BMW.model);
    printf("Enter  the rpm :");
    scanf("%d", &BMW.rpm);
    printf("Enter the average : ");
    scanf("%d", &BMW.avg);
    printf("Enter the horse power :");
    scanf("%f", &BMW.hp);

    printf("\nDetails of BMW Car:\n");
    printf("Model : %s\n", BMW.model);
    printf("RPM : %d\n", BMW.rpm);
    printf("Avg : %d\n", BMW.avg);
    printf("HP : %f\n", BMW.hp);
    return 0;
}