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

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter age: ");
//     scanf("%d", &n);
//     if (n >= 18) {
//         printf("Eliggble for vote");
//      } else {
//         printf("Not Eligible for voting");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d %d\n",(a+b),(a-b));
    printf("%.1f %.1f",(c+d),(c-d));
    
    return 0;
}