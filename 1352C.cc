#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define Fread freopen("in.txt","r", stdin)
#define Fwrite freopen("out.txt", "w", stdout)
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main ()
{
    FastIO;
    //Fread;
    //Fwrite;

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        if (k < n) cout << k << nl;

        else if (k == n) {
            cout << (ll)n + 1 << nl;
        }
        else {
            int val = k / (n - 1);
            ll ans = (ll)val + k;
            if (ans % n == 0) cout << ans - 1 << nl;
            else cout << ans << nl;
        }
    }

    return 0;
}
