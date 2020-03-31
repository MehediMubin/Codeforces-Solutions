#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    vector <int> v;
    int in;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &in);
        v.push_back(in);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int a = v[0] - v[1];
    int b = v[0] - v[2];
    int c = v[0] - v[3];

    printf("%d %d %d\n", a, b, c);

    return 0;
}
