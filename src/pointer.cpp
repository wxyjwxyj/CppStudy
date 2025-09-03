#include <cstdio>
int main()
{

    int a = 10;
    int *p_a = &a;

    int **pp_a = &p_a;

    printf("a's value: %d\n", a);
    printf("\n");
    printf("a's address: %p\n", &a);
    printf("a's first point: %p\n", p_a);
    printf("\n");
    printf("p_a's first point: %p\n", &p_a);
    printf("a's second point: %p\n", pp_a);

    return 0;
}