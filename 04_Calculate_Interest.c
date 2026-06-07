// Aim: Calculate both Simple Interest (SI) and Compound Interest (CI)

/*
  Formula: 
      Simple Interest (SI) = (P * R * T) / 100
      Compound Interest (CI) = P * (1 + R/100)^T - P
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principle, rate, time;
    float simple_interest, compound_interest, amount; // ✅ Declare missing variables

    // Input
    printf("Enter Principal amount: ");
    scanf("%f", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    // Simple Interest Calculation
    simple_interest = (principle * rate * time) / 100;

    // Compound Interest Calculation
    amount = principle * pow((1 + rate / 100), time);
    compound_interest = amount - principle;

    // Output
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
