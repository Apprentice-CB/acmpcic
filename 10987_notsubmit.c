#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    scanf("%s", s);
    int cnt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}   
