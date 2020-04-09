#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	int m;
	cin >> m;
	int a, b;
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b;
	}
	int sumcount = 0;
	int sum = 0;
	vector<int> v1;
	vector<int> v2;
	v1.push_back(a);
	v2.push_back(b);
	sort(v1.begin(), v1.end());
	for (int i = 0; i<v2.size(); ++i)
	{
		sumcount += v2[i];
	}
	int len = v1.size();
	int k = len - 1;;
	while (sumcount >= 0 && k>=sumcount)
	{
		sum += v1[k];
		k--;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}