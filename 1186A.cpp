#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    if (n > m || n > k) puts("No");

    else puts("Yes");

    return 0;
}
