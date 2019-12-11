#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAX 100000

bool marked[MAX + 5];
int counter[MAX + 5];

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
    int j = 2;
    counter[1] = 2;
    for (int i = 3; i <= MAX; i += 2) {
        if (!marked[i]) {
            counter[j] = i;
            j++;
        }
    }
}

int main ()
{
    sieve();
    int n, AP = 0;
    scanf("%d", &n);
    for (int i = 6; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; counter[j] < i; j++) {
            if (i % counter[j] == 0)
                cnt++;
        }
        if (cnt == 2)
            AP++;
    }
    printf("%d\n", AP);

    return 0;
}
