#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n, cnt = 0;
    scanf("%d", &n);
    while (1) {
        if (n == 0) break;

        if (n >= 100) n -= 100;

        else if (n >= 20) n -= 20;

        else if (n >= 10) n -= 10;

        else if (n >= 5) n -= 5;

        else if (n >= 1) n -= 1;

        cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
