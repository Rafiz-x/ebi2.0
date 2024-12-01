#include <stdio.h>

// Defining Function to Convert Units

float CtoF(float celsius)
{ // Celsius to Fahrenheit: Formula C /5 = (F-32)/9 => F = (9C/5)+32
    return (celsius * 9 / 5) + 32;
}

float FtoC(float fahrenheit)
{ // Fahrenheit to Celsius: Formula C /5 = (F-32)/9 => C = 5(F-32)/9
    return (fahrenheit - 32) * 5 / 9;
}

float CtoK(float celsius)
{ // Celsius to Kelvin: K = C+273.15
    return celsius + 273.15;
}

float FtoK(float fahrenheit)
{
    // First convert to Celsius(using FtoC function) then Celsius to Kelvin
    float inCelsius = FtoC(fahrenheit);
    return inCelsius + 273.15;
}

float KtoF(float kelvin)
{
    // first convert to celsius (formula: C = K-273.15) then convert to fahrenheit (using CtoF func)
    float inCelsius = kelvin - 273.15;
    return CtoF(inCelsius);
}

float KtoC(float kelvin)
{ // kelvin to celsius: C=k-273.15
    return kelvin - 273.15;
}

void conversion()
{
    int convert_no;
    float C, F, K;

    printf(" 1. Celsius to Fahrenheit\n 2. Fahrenheit to Kelvin\n 3. Celsius to Kelvin\n 4. Fahrenheit to Celsius\n 5. Kelvin to Fahrenheit\n 6. Kelvin to Celsius\n\t Chosse one: ");

    scanf("%d", &convert_no);

    printf("\n");
    switch (convert_no)
    {
    case 1:
        printf("Temparature in Celsius:");
        scanf("%f", &C);
        printf("\nResult: %.3f Celsius = %.3f Fahrenheit", C, CtoF(C));
        break;
    case 2:
        printf("Temparature in Fahrenheit:");
        scanf("%f", &F);
        printf("\nResult: %.3f Fahrenheit = %.3f Kelvin", F, FtoK(F));
        break;
    case 3:
        printf("Temparature in Celsius:");
        scanf("%f", &C);
        printf("\nResult: %.3f Celsius = %.3f Kelvin", C, CtoK(C));
        break;
    case 4:
        printf("Temparature in Fahrenheit:");
        scanf("%f", &F);
        printf("\nResult: %.3f Fahrenheit = %.3f Celsius", F, FtoC(F));
        break;
    case 5:
        printf("Temparature in Kelvin:");
        scanf("%f", &K);
        printf("\nResult: %.3f Kelvin = %.3f Fahrenheit", K, KtoF(K));
        break;
    case 6:
        printf("\nTemparature in Kelvin:");
        scanf("%f", &K);
        printf("\nResult: %.3f Kelvin = %.3f Celsius", K, KtoC(K));
        break;
    default:
        printf("\nInvalid Input! Please try again");
        break;
    }

    printf("\n\n");
    conversion();
}

int main()
{
    conversion();
    return 0;
}
