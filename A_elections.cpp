#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b, c, d, e, f, maxs;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;

        maxs = max(a, b);
        maxs = max(maxs, c);

        if (maxs == a && a != b && a != c)
        {
            d = 0;
        }
        else
        {
            d = (maxs - a) + 1;
        }

        if (maxs == b && b != a && b != c)
        {
            e = 0;
        }
        else
        {
            e = (maxs - b) + 1;
        }

        if (maxs == c && c != b && c != a)
        {
            f = 0;
        }
        else
        {
            f = (maxs - c) + 1;
        }

        cout << d << " " << e << " " << f<<endl;
    }
    return 0;
}