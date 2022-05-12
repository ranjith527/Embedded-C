#include <stdio.h>

void print(const char* C)
{
    while(*C != '\0')
    {
        printf("%c", *C);
        C = C+1;
    }
    printf("\n");
}

int main()
{
    char C[] = "Hello, World!"; // string gets stored in the space for array
    // char *C = "Hello, World!"; // string gets stored as compiled time constant
    // C[0] = 'A'; // which can't be changed as compiler make C as constant during complie time
    print(C);
    //printf("%c\n", *C);
}