#include <stdio.h>

int main()
{
    char a, b, c;
    char d, e, f;

    int N1, N2;
    float Q;

    printf("Digite a centena de N1: ");
    scanf(" %c", &a);

    printf("Digite a dezena de N1: ");
    scanf(" %c", &b);

    printf("Digite a unidade de N1: ");
    scanf(" %c", &c);

    printf("Digite a centena de N2: ");
    scanf(" %c", &d);

    printf("Digite a dezena de N2: ");
    scanf(" %c", &e);

    printf("Digite a unidade de N2: ");
    scanf(" %c", &f);

    N1 = (a - '0') * 100 + (b - '0') * 10 + (c - '0');
    N2 = (d - '0') * 100 + (e - '0') * 10 + (f - '0');

    Q = (float) N1/N2;

    printf(" %8.3f", Q);
}