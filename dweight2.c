#include <stdio.h>

int main(void)
{
    int height;
    int length;
    int width;
    int volume;
    int weight;

    printf("Enter height of a box: ");
    scanf("%d", &height);
    printf("Enter length of a box: ");
    scanf("%d", &length);
    printf("Enter width of a box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}