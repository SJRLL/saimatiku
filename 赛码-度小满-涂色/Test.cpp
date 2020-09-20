题目描述：
小A正在学画画，现在，线稿已经画好了，只剩下涂色部分了。但是小A发现，他的颜料不够了。每一块颜料能涂一个色块，每一个色块的颜色是事先决定好了的。
由于颜料不够，小A只能尽其所能来涂色。如果一个色块没有了颜料，就不能涂色。现在，给你画中需要的色块颜色，和小A现在手上有的颜料，请你计算小A能涂多少个色块。

输入描述
输入包含两个字符串，都仅包含大写字母，每一种字母代表一种颜色。 第一个字符串S代表小A手上的颜料，第二个字符串T代表画需要的颜料。

1≤ | S | , | T | ≤1000

输出描述
输出包含一个数，即最多能涂多少个色块。


样例输入
AAB
ABC
样例输出
2

提示
小A拥有两个A颜料，一个B颜料，用了一个A颜料一个B颜料，总共涂了两个色块。

#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char, int> res;
	string s1;
	string s2;
	cin >> s1 >> s2;
	int sum = 0;
	for (int i = 0; i<s1.size(); ++i)
	{
		if (res.find(s1[i]) != res.end())
		{
			res[s1[i]]++;
		}
		else
		{
			res[s1[i]] = 1;
		}
	}
	for (int i = 0; i<s2.size(); ++i)
	{
		if (res.find(s2[i]) != res.end() && res[s2[i]] != 0)
		{
			sum++;
			res[s2[i]]--;
		}
	}
	cout << sum << endl;
	return 0;
}