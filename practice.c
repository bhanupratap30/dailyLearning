/*Harbhajan is learning about formatting output in C.
 Create a simple program for him that declares two integer variables,
 m with a value of 8, and n with a value of 10. */

/*#include <stdio.h>
int main () {
    int m = 8;
    int n = 10;
    printf("%d\t%d", m,n);
    return 0;
}*/

/*Harish wants to create a simple C program to display a specific
floating-point value. Write a program that declares a float variable
 with a value of 20.00 initialized to it and prints it using the printf function*/

// #include <stdio.h>
// int main(){
//     float m = 20.00;
//     printf("%.2f", m);
//     return 0;
// }

/*Harveen is practicing C programming and wants to display two integers.
Write a simple program for him that declares two integer variables, x with a value of 5, and y with a value of 6.
*/

// #include <stdio.h>
// int main (){
//     int x = 5;
//     int y = 6;
//     printf("%d,%d", x,y);
//     return 0;
// }

/*Ishu wants to create a program that asks users to input their birthdates, including the day, month, and year.
 The program should then display the entered birthdate in the format "DD/MM/YYYY."
Write a program to assist Ishu in achieving this task.*/

/* #include <stdio.h>
 int main()
{
    int day, month, year;
    printf("Enter your DOB: ");
    scanf("%d %d %d", &day, &month, &year);
    printf("Your DOB is(DD/MM/YYYY): %02d/%02d/%04d", day, month, year); // aab dekho jaise mei input agr sirf year mei 6
    // de rha hu toh bhi output mera 2006 aayega wo hoga jb mei code mei 20%01d likhunga.brna %04d likhna.
    return 0;
} */
/*Shyam works at a company where his gross salary is calculated based on his basic salary along with other allowances.
The company provides him with a Dearness Allowance (DA) of 10% and a Travel Allowance (TA) of 12%. find gross salary.
*/

// #include <stdio.h>
// int main(){
//     float basic_salary;
//     float da, ta, gross_salary;
//     scanf("%f", &basic_salary);
//     da = 0.1 * basic_salary;
//     ta = 0.12 * basic_salary;
//     gross_salary = da + ta + basic_salary;
//     printf("Gross salary is: %.2f/n", gross_salary);
//     return 0;
// }

/*Maria loves shopping and is curious to know the total cost of her favorite items. She intends to purchase t items,
 each priced at p rupees, with a progressive increase of 5 rupees for every subsequent item.
Write a program that takes the price of one item (p) and the number of items (t) as input, 
calculates the total cost using the formula (t/2) * (2p + (t-1) * 5), and displays the result.*/

// #include <stdio.h>
// int main(){
//     float p;
//     float t;
//     float  total_cost;
//     scanf("%f", &p);
//     scanf("%f", &t);
//     total_cost = (t/2) * (2*p + (t-1) * 5);
//     printf("Total cost is= %.2f\n", total_cost);
//     return 0;
// }

/*Build a program for a small town where individuals are eligible to vote only if they are 18 years
or older. Take the age of a person as input and indicate their eligibility. If the age is 18 or 
above, print "Eligible for Voting"; otherwise, print "Not eligible for Voting" using the ternary operator.*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter age: ");
    scanf("%d", &n);
    if (n >= 18) {
        printf("Eliggble for vote");
     } else {
        printf("Not Eligible for voting");
    }
    return 0;

}