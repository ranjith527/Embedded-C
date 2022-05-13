#include <stdio.h>

int main()
{
    int B[5] = {12, 13, 15, 17, 19};
    int A[2][5] = {
                    {1,2,3,4,5},
                    {6,7,8,9,0}
                };
    printf("%d\n", A);
    printf("%d\n", *A);
    printf("%d\n", *(*(A+1)+3));
}