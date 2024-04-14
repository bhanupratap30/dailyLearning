/*Switch cases*/

/*Merlin is working on a calendar application that requires a leap-year verification feature
for accurate event scheduling. Users input a year, and her program determines whether it's a
leap year or not, aiding in precise calendar calculations. */

#include <stdio.h>
int main (){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    switch (year % 4) {
        case 0:
        switch (year % 100) {
            case 0:
            switch (year % 400) {
                case 0:
                    printf("%d is a leap year", year);
                    break;
                default:
                    printf("%d is not a leap year", year);
            }
                break;
            default:
                printf("%d is a leap year", year);
        }
            break;
        default:
            printf("%d is not a leap year", year);
    }
    return 0;
}