#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2, result;
    int choice;
for (int i =1;i<=100;i++) {

    printf("\n=====Calculator-Run#%d=====\n",i);
    printf("Select Operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");

    printf("Enter choice 1/2/3/4/5: ");
    scanf("%d", &choice);
    if (choice == 5) {
        printf("Thanks for using the calculator!\n");
        break;
    }

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);


    if (choice == 1) {
        result = add(num1, num2);
        printf("%f + %f = %f\n", num1, num2, result);
    }
    else if (choice == 2) {
        result = subtract(num1, num2);
        printf("%f - %f = %f\n", num1, num2, result);
    }
    else if (choice == 3) {
        result = multiply(num1, num2);
        printf("%f * %f = %f\n", num1, num2, result);
    }
    else if (choice == 4) {
        if(num2 != 0) {
            result = divide(num1, num2);
            printf("%f / %f = %f\n", num1, num2, result);
        }
    }
    else {
        printf("Invalid choice\n");
    }
}

    return 0;
}