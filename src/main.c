#include <stdio.h>

// function declaration
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

// main function definition
int main()
{
    int a, b, result;
    printf("Enter two numbers\n");
    printf("Enter your first number: \n");
    scanf("%d", &a);
    printf("Enter your second number: \n");
    scanf("%d", &b);

    result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);

    result = sub(a, b);
    printf("%d - %d = %d\n", a, b, result);

    result = mul(a, b);
    printf("%d * %d = %d\n", a, b, result);

    result = div(a, b);
    printf("%d / %d = %d\n", a, b, result);

    return 0;
}

// function implementation
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: division by zero\n");
        return 0;
    }
    else
    {
        return a / b;
    }
}