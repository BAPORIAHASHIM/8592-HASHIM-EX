//write a C program to find the third angle of a triangle if two angles are given.
#include <stdio.h>

int main() 
{
    float angle1, angle2, angle3;

    
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    
    printf("Enter the second angle: ");
    scanf("%f", &angle2);


    angle3 = 180 - (angle1 + angle2);

    
    printf("The third angle of the triangle is: %.2f\n", angle3);

    return 0;
}


