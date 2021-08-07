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

    string str;
    cin >> str;

    vector <int> v(str.size());
    for (int i = 0; i < str.size(); i++) {
        v[i] = str[i] - '0';
    }

    for (int i = 0; i < v.size(); i++) {
        if (!i) {
            if (v[i] == 9) continue;
            else {
                if (v[i] > (9 - v[i])) v[i] = 9 - v[i];
            }
        }
        else if (v[i] > (9 - v[i])) v[i] = 9 - v[i]; 
    }
    for (auto i : v) cout << i;
    cout << nl;

    return 0;
}
