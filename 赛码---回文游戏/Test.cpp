#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	while (cin >> s)
	{
		int len = s.size();
		int i = 0, j = len - 1;
		int count = 0;
		while (i<j)
		{
			if (s[i] == s[j])
			{
				i++;
				j--;
			}
			else if (s[i + 1] == s[j])
			{
				count++;
				i++;
			}
			else if (s[i] == s[j - 1])
			{
				count++;
				j--;
			}
		}

		if (count % 2 == 0)
		{
			cout << "Cassidy" << endl;
		}
		else
		{
			cout << "Eleanore" << endl;
		}
	}
	system("pause");
	return 0;
}