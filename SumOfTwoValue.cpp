#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, target;
	cin >> n >> target;
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr.begin(), arr.end());
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (arr[i].first + arr[j].first == target)
		{
			cout << arr[i].second << " " << arr[j].second;
			return 0;
		}
		if (arr[i].first + arr[j].first < target)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}