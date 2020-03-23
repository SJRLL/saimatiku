用英文字母a - z来分别表示数值0 - 25, 形成一个26进制的数值表示法。需要你写一个方法，
将用a - z表示的26进制数值的字符串，转化为对应的10进制数值。


输入
输入数据有多组，每组占一行，包含多个a - z之间的字符。

//样例输入：
ba

bcd

gibbon

goodboy

输出
所对应表示的10进制数。

//样例输出：
26

731

74962693

2026285376

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		long sum = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			sum = sum * 26 + s[i] - 'a';
		}
		cout << sum << endl;
	}
	return 0;
}