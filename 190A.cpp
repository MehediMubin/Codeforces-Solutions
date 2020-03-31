#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n == 0) {
        if (m == 0)
            printf("%d %d\n", 0, 0);
        else if (m > 0)
            puts("Impossible");
    }
    if (n > 0) {
        if (m == 0) {
            printf("%d %d\n", n, n);
        }
        else if (m > 0) {
            if (m > n) {
                int maxi = m + (n - 1);
                printf("%d %d\n", m, maxi);
            }
            else {
                int maxi = n + (m - 1);
                printf("%d %d\n", n, maxi);
            }
        }
    }

    return 0;
}
