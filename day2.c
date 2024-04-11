/*Taking values and checking whether they are greater than or equal to and all operations*/

// #include <stdio.h>
// int main() {
//     int a = 4, b = 4, c = 7;
//     printf("%d a is equal to b:%d\n", a,b, a == b);
//     printf("%d a is not equal to c:%d\n", a,c, a != c);
//     printf("%d a is less than c:%d \n", a,c, a < c);
//     printf("%d c is greater than a:%d \n", c,a, c > a);
//     printf("%d a is less than or equal to c:%d \n", a,c, a <= c);
//     printf("%d a is greater or equal to b:%d \n", a,b, a >= b);
//     return 0;
// }

/*Philip is given the following expression: (++n) * (--m). Design a program for Philip that takes
initial values for variables m and n, evaluates the expression, and prints the result. 
Ensure that the program handles pre-increment (++n) and pre-decrement (--m) operations correctly.*/

// #include <stdio.h>
// int main() {
//     int n,m, result;
//     printf("Enter the value of n:" );
//     scanf("%d", &n);
//     printf("Enter the value of m:" );
//     scanf("%d", &m);
//     int a = m;
//     m = n;
//     n = a;
//     result = (++n)*(--m);
//     printf("The result is: %d\n", result);
//     return 0;
// }

/*Brian is an enthusiastic learner diving into the world of programming! Brian is experimenting with
unary operators and wants to understand their impact on a given variable.Can you help him by writing
a program that takes an integer as input, performs a series of unary operations a = ++a * --a, and
then displays the final value?*/

// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     a = ++a * --a;
//     printf("The value of a is:  %d\n", a);
//     return 0;
// }

/*In a coding challenge, you have been tasked with a unique problem: to find the maximum of two given
integers using only relational operators.Write a program that takes two integer inputs, and uses only
relational operators to determine the maximum of the two numbers. Your program should then print the
calculated maximum*/

// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter the first number:");
//     scanf("%d",&m);
//     printf("Enter the second number:");
//     scanf("%d",&n); 
//     int max_num = (m > n) ? m : n;
//     printf("This is the max num :%d\n", max_num);
//     return 0;
// }
/*Emma needs your help in deciding which of the two numbers is smaller. Create a program that takes
two integers as input, identifies the minimum using a relational operator, and displays it.*/

// #include <stdio.h>
// int main() {
//     int x, y;
//     printf("Enter the value of x:");
//     scanf("%d", &x);
//     printf("Enter the value of y:");
//     scanf("%d", &y);
//     int min_num = (x < y) ? x : y;
//     printf("The min num is:%d \n ", min_num);
//     return 0;
// }
