#include <stdio.h>

int main()
{   
    int a = 0, b = 0, c = 0;
    scanf("%d %d", &a, &b, &c);

    printf("%d\n", (a > b && a > c) ? 1 : 0);
    printf("%d\n", (a == b && a == c) ? 1 : 0);
    
    return 0;

}