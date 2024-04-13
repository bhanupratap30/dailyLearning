/*Alex, a savvy shopper, is organizing items in his shopping cart. Create a program to compare 
the quantities of two items, X and Y, in the shopping cart. The program should prompt Alex to input
quantities for items X and Y. Utilize the "if" conditional statements to determine and display the 
relationship between these quantities in the context of Alex's shopping experience.*/

// #include <stdio.h>
// int main(){
//     int x,y;
//     printf("Enter the items for x quantities: ");
//     scanf("%d", &x);
//     printf("Enter the items for y quantities: ");
//     scanf("%d", &y);
//     if (x > y) {
//         printf("X has more itmes");
//     } else if (x < y) {
//         printf("Y has more items");
//     } else {
//         printf("They have equal items");
//     }
//     return 0;
// }

/*Given three integers A, B, C where  'A' denotes the first term of an arithmetic sequence, 'C' 
denotes the common difference between an arithmetic sequence and an integer 'B'. You need to tell 
whether 'B' exists in the arithmetic sequence or not. Return 1 if B is present in the sequence. 
Otherwise, return 0. */

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    printf("Enter the value of c: \n");
    scanf("%d", &c);
    if ( (b - a) % c == 0) {
        printf("its in arithematic");
    } else {
        printf("its not in arithematic");
    }
    return 0;
}