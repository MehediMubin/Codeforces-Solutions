#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    int n, i, val = 2;
    scanf("%d", &n);

    if (n == 1) puts("Ehab");

    else {
        while (n > 0) {
            i = val;
            if (n % 2 == 0) {
                if (i % 2 == 0) i = n;

                else if (i % 2 != 0) i = n - 1;
            }
            else if (n % 2 != 0) {
                if (i % 2 != 0) i = n;

                else if (i % 2 == 0) i = n - 1;
            }
            n -= i;
            val++;
        }
        if (i % 2 == 0) puts("Mahmoud");

        else if (i % 2 != 0) puts("Ehab");
    }

    return 0;
}
