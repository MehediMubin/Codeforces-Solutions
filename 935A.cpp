#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n, cnt = 1;
    scanf("%d", &n);
    if (n == 2) printf("%d\n", cnt);

    else {
        for (int i = 2; i <= n / 2; i++) {
            int a = n - i;
            if (a % i == 0) cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
