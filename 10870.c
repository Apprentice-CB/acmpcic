#include <stdio.h>

int fibo(int n)
{
    if (n == 0)
    {
        return 0; 
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    printf("%d", fibo(N));
}