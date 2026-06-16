#include <stdio.h>

int main() 
{
    int n, t, r, sum = 0, f;

    printf("Enter the nubmer");
    scanf("%d", &n);
    t = n;

    while(t > 0) {
        r = t % 10;
        f = 1;

        for(int i = 1; i <= r; i++)
            f = f * i;

        sum = sum + f;
        t = t / 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}