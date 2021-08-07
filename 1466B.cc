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

        vector <int> v(n);
        for (auto &i : v) cin >> i;
        sort(all(v));
        reverse(all(v));
        for (int i = 0; i < v.size(); i++) {
            if (!i) {
                v[i]++;
            }
            else {
                if (v[i] == v[i - 1]) continue;
                if (v[i - 1] != (v[i] + 1)) v[i]++;
            }
        }

        set <int> s;
        for (auto i : v) s.insert(i);
        cout << s.size() << nl;
    }

    return 0;
}
