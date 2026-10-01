


#include <stdio.h>

int main() {
    float principal = 1000.0;
    float rateOfInterest = 5.0; // percent per year
    int years;
    float amount = principal;
    float interest;
 

    printf("---- Interest Growth ----\n");
    printf("Enter number of years: ");
    scanf("%d", &years);

    for (int year = 1; year <= years; year++) {
       interest = amount * rateOfInterest / 100;
        amount += interest;
        printf("Year %d: Interest = Rs.%.2f | Amount = Rs.%.2f\n", year, interest, amount);
    }

    printf("--------------------------\n");
    printf("Final Amount after %d years: Rs.%.2f\n", years, amount);

    return 0;
}
