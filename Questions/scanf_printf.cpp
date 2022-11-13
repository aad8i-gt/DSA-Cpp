#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int i;
    long l;
    char ch;
    float fl;
    double db;

    scanf("%d %ld %c %f %lf", &i, &l, &ch, &fl, &db);
    // printf("%d %ld %c %f %lf", i, l, ch, fl, db);
    printf("%d", i);
    printf("\n");
    printf("%ld", l);
    printf("\n");
    printf("%c", ch);
    printf("\n");
    printf("%f", fl);
    printf("\n");
    printf("%lf", db);
    return 0;
}