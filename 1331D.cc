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

    string str;
    cin >> str;

    int val = str[str.size() - 1] - '0';
    cout << val % 2 << nl;

    return 0;
}
