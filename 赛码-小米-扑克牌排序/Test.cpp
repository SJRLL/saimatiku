#include <iostream>
#include <vector>
#include<string>
#include <numeric>
#include <limits>
#include<stdlib.h>

using namespace std;
const int N = 15;
int array[N];

/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
vector < string > pokersort(vector < string > pokers) {
	vector<string> v;
	for (int i = 0; i<pokers.size(); ++i)
	{
		if (pokers[i][0] >= '0'  && pokers[i][0] <= '10')
		{
			array[pokers[i][0] - '0']++;
		}
		else if (pokers[i] == "J")
		{
			array[11]++;
		}
		else if (pokers[i] == "Q")
		{
			array[12]++;
		}
		else if (pokers[i] == "K")
		{
			array[13]++;
		}
	}
	for (int i = 3; i <= 10; ++i)
	{
		while (array[i] != 0)
		{
			v.push_back(to_string(i));
			array[i]--;
		}
	}
	while (array[11])
	{
		v.push_back("J");
		array[11]--;

	}
	while (array[2])
	{
		v.push_back("Q");
		array[12]--;

	}
	while (array[13])
	{
		v.push_back("K");
		array[13]--;

	}
	while (array[1])
	{
		v.push_back(to_string(1));
		array[1]--;
	}
	while (array[2])
	{
		v.push_back(to_string(2));
		array[2]--;
	}
	return v;
}
/******************************结束写代码******************************/


int main() {
	vector < string > res;

	int _pokers_size = 0;
	cin >> _pokers_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<string> _pokers;
	string _pokers_item;
	for (int _pokers_i = 0; _pokers_i<_pokers_size; _pokers_i++) {
		getline(cin, _pokers_item);
		_pokers.push_back(_pokers_item);
	}

	res = pokersort(_pokers);
	for (int res_i = 0; res_i < res.size(); res_i++) {
		cout << res[res_i] << endl;;
	}
	system("pause");
	return 0;

}
