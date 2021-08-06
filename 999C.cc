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

    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    map <char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[str[i]]++;
    }

    for (auto &i : mp) {
        if (k == 0) break;
        else if (i.second >= k) {
            i.second -= k;
            k = 0;
        }
        else if (i.second < k) {
            k -= i.second;
            i.second = 0;
        }
    }

    reverse(all(str));
    string ans;
    for (int i = 0; i < n; i++) {
        if (mp[str[i]] > 0) {
            ans.pb(str[i]);
            mp[str[i]]--;
        }
    }
    reverse(all(ans));
    cout << ans << nl;

    return 0;
}
