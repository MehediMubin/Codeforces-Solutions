#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isPrime (ll n)
{
    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0) return 0;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main ()
{
    int T;
    ll n, sq;
    scanf("%d", &T);
    while (T--) {
        cin >> n;
        sq = sqrt(n);
        if (sq * sq == n) {
            if (isPrime(sq)) puts("YES");
            else puts("NO");
        }
        else
            puts("NO");
    }

    return 0;
}
