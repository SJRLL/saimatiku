#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int  n = 5;
	vector<double> v(n);
	int count = 0;
	int sum = 0;
	for (int i = 0; i<v.size(); ++i)
	{
		cin >> v[i];
	}
	for (int i = 0; i<v.size(); ++i)
	{
		count += v[i] / 3;
		if (v[i] == 1)
		{
			sum += 1;
		}
		if (v[i] == 2)
		{
			sum += 2;
		}
		if (sum == 3)
		{
			count += 1;
			sum = 0;
		}
		if (sum == 4)
		{
			count += 1;
			sum = 1;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}