#include <bits/stdc++.h>

using namespace std;

#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)

int main ()
{
    ///fread;
    char str[5], s[5];
    scanf("%s", str);
    bool b = 0;

    for (int i = 0; i < 5; i++) {
        getchar();
        scanf("%s", s);
        if (str[0] == s[0] || str[1] == s[1]) b = 1;
    }

    if (b) puts("YES");
    else puts("NO");

    return 0;
}
