#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n;
    scanf("%d", &n);
    if (n == 1) {
        puts("I hate it");
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (i == n) {
                if (i % 2 == 0) puts("I love it");
                else puts("I hate it");
                break;
            }
            if (i % 2 == 0) cout << "I love that ";
            else cout << "I hate that ";
        }
    }

    return 0;
}
