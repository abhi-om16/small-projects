//weight converter 
#include <stdio.h>

int main() {
    float weight;
    char choose;
    float converter;

    printf("Weight Converter Program\n");
    printf("Enter L for lbs to kg\n");
    printf("Enter K for kg to lbs\n");
    printf("Your choice: ");
    scanf(" %c", &choose);   // space before %c is important

    if (choose == 'L' || choose == 'l') {
        printf("Enter your weight in lbs: ");
        scanf("%f", &weight);

        converter = weight * 0.45;
        printf("Your weight in kg is: %.2f\n", converter);
    }
    else if (choose == 'K' || choose == 'k') {
        printf("Enter your weight in kg: ");
        scanf("%f", &weight);

        converter = weight * 2.2;
        printf("Your weight in pounds is: %.2f\n", converter);
    }
    else {
        printf("You didn't select L or K\n");
    }

    return 0;
}
