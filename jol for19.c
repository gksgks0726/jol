#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<6;i++){
        for(j=i+1;j<=i+5;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}