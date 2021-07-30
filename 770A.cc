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

    int n, k;
    cin >> n >> k;

    char ch = 'a';
    for (int i = 1; i <= n; i++) {
        cout << ch++;
        if (i % k == 0) ch = 'a';
    }
    cout << nl;

    return 0;
}
