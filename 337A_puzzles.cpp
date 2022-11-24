#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, t[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> t[i];
    }
    sort(t, t + m);
    int min = t[n-1] - t[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (t[i+n-1] - t[i] < min)
        {
            min = t[i+n-1] - t[i];
        }
    }
    cout << min << endl;
    return 0;
}



