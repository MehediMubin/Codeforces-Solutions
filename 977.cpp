#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    printf("%d\n", n);

    return 0;
}

