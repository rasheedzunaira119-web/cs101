#include <stdio.h>

int main() {
    int age;
    float height;
    char name[80];

    printf("Enter name, age, and height: ");
    int result = scanf("%19s %d %f", name, &age, &height);
    if (result == 3) {
        printf("Hello %s! You are %d years old and %.f meters tall.\n", name, age, height);
    }

    return 0;
}