#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb emplace_back
#define all(v) (v).begin(),(v).end()
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main ()
{
    FastIO;

    int n;
    cin >> n;

    vector <int> v(n);
    for (auto &i : v) cin >> i;
    int l = v[0], r = v[n - 1];
    for (int i = 0; i < v.size(); i++) {
        if (!i) cout << abs(v[i] - v[i + 1]) << " ";
        else if (i == v.size() - 1) cout << abs(v[i] - v[i - 1]) << " ";

        else {
            int a = abs(v[i] - v[i + 1]);
            int b = abs(v[i] - v[i - 1]);
            cout << min(a, b) << " ";
        }

        int a = abs(l - v[i]);
        int b = abs(r - v[i]);
        cout << max(a, b) << nl;
    }

    return 0;
}
