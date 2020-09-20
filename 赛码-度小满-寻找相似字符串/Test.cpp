#include<bits/stdc++.h>
using namespace std;

bool isSimilarSword(vector<string> v)
{
	int i, j, k;
	for (i = 0; i < v.size(); ++i)
	{
		for (j = i + 1; j < v.size(); ++j)
		{
			int count = 0;
			for (k = 0; k < v[i].length(); ++k)
			{
				if (v[i][k] != v[j][k])
				{
					++count;
				}
				if (cout >= 2)
				{
					return false;
				}
			}
		}
	}
	return true;
}

int main()
{
	int n = 0;
	cin >> n;
	while (n--)
	{
		string s = "";
		cin >> s;
		vector<string> v;
		string ss = to_string(s[0]);
		int i ;
		for (i = 1; i < s.length(); ++i)
		{
			if (i % 3 != 0)
			{
				ss += s[i];
			}
			else
			{
				v.push_back(ss);
				ss = to_string(s[i]);
			}
		}
		v.push_back(ss);
		if (isSimilarSword(v))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}