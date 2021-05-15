#include <math.h>
#include <stdio.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}
void calcSubtraction(){
    printf("Enter two numbers:");
    int a,b;
    scanf("%d%d", &a, &b);
    int result=a-b;
    printf("The difference is %d\n",result);
}
void calcMultiplication(){
    printf("Enter two number:");
    int a,b;
    scanf("%d%d", &a, &b);
    int result=a*b;
    printf("The result is %d\n", result);
}
void calcDivision(){
    printf("Enter two number:");
    int a,b;
    scanf("%d%d", &a, &b);
    int result=a/b;
    printf("The result is %d\n", result);
}
void calcExponentation(){
    printf("Enter a number:");
    int a;
    scanf("%d", &a);
    double result = exp(a);
    printf("The exponential is%.2lf",result);
}

// Fill the rest of the functionality here!
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exponentiation

// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);
    printf("The sine value is %lf", answer);
    
}
void calcCosine() {
    printf("Enter the numer:");
    double number;
    scanf("%lf", &number);
    double result=acos(number);
    printf("The cosine in radians is %lf",result);
    
    
}
void calcTangent()
{
    printf("Enter the number:");
    double number;
    scanf("%lf", &number);
    double result=atan(number);
    printf("The tangent is %lf",result);
}
void calcFloor(){
    double number;
    printf("Enter the number:");
    scanf("%lf", &number);
    int result=floor(number);
    printf("The floor is %d",result);
}
void calcCeil(){
    double number;
    printf("Enter the number");
    scanf("%lf", &number);
    int result=ceil(number);
    printf("The ceil is %d",result);
}
void calcRound()
{
    int  number;
    printf("Enter the number:");
    scanf("%d", &number);
    int result=round(number);
    printf("The result is %d", number);
}
void calcAbs()
{
    double number;
    printf("Enter the number:");
    scanf("%lf", &number);
    double result=fabs(number);
    printf("The result is %lf",result);
}

// Fill the rest of the functionality here!
// 7. Cosine
// 8. Tangent
// 9. Floor
// 10. Ceiling
// 11. Round
// 12. Absolute value

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        "10. Ceiling\n"
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;

        case 2:
            calcSubtraction();
            break;
        case 3:
            calcMultiplication();
            break;
        case 4:
            calcDivision();
            break;
        case 5:
            calcExponentation();
            break;

        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
            calcCosine();
            break;
        case 8:
            calcTangent();
            break;
        case 9:
            calcFloor();
            break;
        case 10:
            calcCeil();
            break;
        case 11:
            calcRound();
            break;
        case 12:
            calcAbs();
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}