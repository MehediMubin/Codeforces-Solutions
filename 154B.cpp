#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

vector <int> divisor[MAX];
int arr[MAX];

void sieve (int n)
{
    divisor[1].push_back(1);
    for (int i = 2; i <= n; i++) {
        divisor[i].push_back(i);
        for (int j = 2 * i; j <= n; j += i) {
            divisor[j].push_back(i);
        }
    }
}

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    sieve(n);
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < m; i++) {
        char ch;
        int x;
        getchar();
        scanf("%c %d", &ch, &x);
        if (ch == '+') {
            if (arr[x] == x)
                puts("Already on");
            else {
                bool found = false;
                for (int i = 0; i < divisor[x].size(); i++) {
                    if (arr[divisor[x][i]] != -1) {
                        printf("Conflict with %d\n", arr[divisor[x][i]]);
                        found = true;
                        break;
                    }
                }
                if (found) continue;
                else {
                    puts("Success");
                    for (int i = 0; i < divisor[x].size(); i++) {
                        arr[divisor[x][i]] = x;
                    }
                }
            }
        }
        else if (ch = '-') {
            if (arr[x] == x) {
                puts("Success");
                for (int i = 0; i < divisor[x].size(); i++) {
                    arr[divisor[x][i]] = -1;
                }
            }
            else
                puts("Already off");
        }
    }

    return 0;
}
