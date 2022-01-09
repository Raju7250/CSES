#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);
    vector<int> v1(m);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < m; i++){
        cin >> v1[i];
    }

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    int ans = 0;
    int i = 0, j = 0;
    
    while (i < n && j < m)
    {
        if (abs(v[i] - v1[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if (v[i] < v1[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ans;
    return 0;
}