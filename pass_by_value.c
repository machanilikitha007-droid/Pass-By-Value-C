#include <stdio.h>

void changeValue(int number)
{
    number = 100;
    printf("Inside function: %d\n", number);
}

int main()
{
    int value = 50;

    printf("Before function call: %d\n", value);

    changeValue(value);

    printf("After function call: %d\n", value);

    return 0;
}
