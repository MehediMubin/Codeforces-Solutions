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

int lowerBound (vector <int> &v, int val) {
    int left = 0, right = v.size() - 1;
    int ans = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == val) {
            ans = mid + 1;
            left = mid + 1;
        }

        else if (v[mid] > val) right = mid - 1;
        else {
            ans = mid + 1;
            left = mid + 1;
        }
    }

    return ans;
}

int main ()
{
    FastIO;
    // Fread;
    //Fwrite;

    int n;
    cin >> n;

    vector <int> v(n);
    for (auto &i : v) cin >> i;
    sort(all(v));
    int q;
    cin >> q;

    while (q--) {
        int in;
        cin >> in;

        cout << lowerBound(v, in) << nl;
        
    }

    return 0;
}
