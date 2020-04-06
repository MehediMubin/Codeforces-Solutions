#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);

        if (n == 2) puts("2");

        else if (n % 2 == 0) puts("0");

        else puts("1");
    }

    return 0;
}
