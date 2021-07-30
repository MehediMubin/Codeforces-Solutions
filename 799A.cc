#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb emplace_back
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

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int val = ceil((double)n / k);
    int t1 = t * val;

    int t2 = 0, i = 1;
    for (i = 1; ; i++) {
        if (i % t == 0) t2 += k;
        if (i > d)
            if ((i - d) % t == 0) t2 += k;
        if (t2 >= n) break;
    }

    if (t1 <= i) cout << "NO" << nl;
    else cout << "YES" << nl;

    return 0;
}
