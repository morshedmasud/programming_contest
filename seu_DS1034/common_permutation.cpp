#include<bits/stdc++.h>
using namespace std;

char a[1005], b[1005], ans[1005];
bool vis[1005];

void solve(char* a, char* b)
{
    int lena = strlen(a), lenb = strlen(b), i, j, c = 0;
    memset(vis, 0, sizeof(vis));
    for (i = 0; i < lena; ++i)
        for (j = 0; j < lenb; ++j)
        {
            if (!vis[j] && a[i] == b[j])
            {
                ans[c++] = a[i];
                vis[j] = true;
                break;
            }
        }
    ans[c] = 0;
    sort(ans, ans + c);
    puts(ans);
}

int main()
{
    while (gets(a))
    {
        gets(b);
        if (strlen(a) < strlen(b)) solve(a, b);
        else solve(b, a);
    }
    return 0;
}  