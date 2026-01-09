#include<stdio.h>
int main() {
int Length, Width, Area, Perimeter;

    printf("Enter Length of Rectangle:  ");
    scanf("%d",&Length);

    printf("Enter Width of Rectangle:  ");
    scanf("%d",&Width);

    Area = Length * Width;
    Perimeter = 2 * (Length + Width);

printf("Area = %d\n", Area);
printf("Perimeter= %d\n", Perimeter);

    return 0;
}