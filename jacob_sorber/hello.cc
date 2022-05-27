#include <stdio.h>


int add3(int a, int b, int c)
{
    int result = a + b + c;
    return result;
}


int main(void) {

    int my_number = 0;

    float my_float = 4.5;

    printf("Hello World %i \n%f \n", my_number, my_float);

    int result = add3(2,3,4);
    printf("Here is the result: %i\n", result);
}