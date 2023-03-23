#include<stdio.h>

float area_Circle(float r);


int main(){
    float r,Area;

    printf("\nEnter the radius of circle:");
    scanf("%f",&r);
    Area = area_Circle(r);
    printf("Area of circle is %.2f",Area);
    return 0;
}

float area_Circle(float r){
    int area;
    area = 3.14*r*r;
    return area;
}


 