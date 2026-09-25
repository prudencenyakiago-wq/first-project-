#include <stdio.h>

#define PI 3.142

int main() {
    float radius, height;
    float volume, surfaceArea;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    surfaceArea = 2 * PI * radius * radius
                + 2 * PI * radius * height;

    printf("\n--- Results ---\n");
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}