#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main ()
{
    FastIO;

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int one = 2;
        int seven = 3;

        if (n % 2 == 0) {
            while (n > 0) {
                cout << 1;
                n -= 2;
            }
            cout << nl;
        }
        else {
            cout << 7;
            n -= 3;
            while (n > 0) {
                cout << 1;
                n -= 2;
            }
            cout << nl;
        }
    }

    return 0;
}
