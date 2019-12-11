#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 10000

bool marked[MAX + 5];
int counter[MAX];

void sieve ()
{
    marked[1] = 1;
    for (int i = 4; i <= MAX; i += 2) marked[i] = 1;
    for (ll i = 3; i * i <= MAX; i += 2) {
        if (!marked[i]) {
            for (ll j = i * i; j <= MAX; j += i + i) {
                marked[j] = 1;
            }
        }
    }
    int j = 1;
    for (int i = 2; i <= MAX; i++) {
        if (!marked[i]) {
            counter[j] = i;
            j++;
        }
    }
}

int main ()
{
    sieve();
    int n, k, prime = 0;
    scanf("%d %d", &n, &k);
    for (int i = 13; i <= n; i += 2) {
        if (marked[i]) continue;
        for (int j = 1; counter[j] < i; j++) {
            if (counter[j] + counter[j + 1] + 1 == i) {
                prime++;
                break;
            }
        }
    }
    if (prime >= k) puts("YES");
    else puts("NO");

    return 0;
}
