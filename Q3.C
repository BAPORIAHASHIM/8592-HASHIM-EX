//Write a C program to enter a number and print its renerse.Using For loop.
#include <stdio.h>

int main() 
{
    int num, reverse = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    for (; num != 0; num /= 10) 
    {
        reverse = reverse * 10 + num % 10;
    }

    
    printf("Reversed number: %d\n", reverse);

    return 0;
}
