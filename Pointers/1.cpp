#include <stdio.h>
#include <cstdlib>
#include <iostream>

void update(int *a, int *b)
{
    // Complete this function
    int sum = *a + *b;
    int diff = *a - *b;

    int abs_value = abs(diff);

    *a = sum;
    *b = abs_value; 
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}