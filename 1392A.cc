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

        set <int> s;
        for (int i = 0; i < n; i++) {
            int in;
            cin >> in;
            s.insert(in);
        }

        if (s.size() == 1) cout << n << nl;
        else {
            cout << 1 << nl;
        }
    }

    return 0;
}
