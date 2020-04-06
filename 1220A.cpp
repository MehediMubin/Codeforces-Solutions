#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n;
    scanf("%d", &n);
    getchar();
    char str[n + 5];

    for (int i = 0; i < n; i++) scanf("%c", &str[i]);

    if (n == 3) puts("1");

    else if (n == 4) puts("0");

    else {
        int zero = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'n') printf("%d ", 1);
            else if (str[i] == 'z') zero++;
        }
        for (int i = 0; i < zero; i++) printf("%d ", 0);
    }

    return 0;
}
