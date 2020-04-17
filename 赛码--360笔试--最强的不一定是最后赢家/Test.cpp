1.最强的不一定是最后的赢家。
某赛事有n名选手参加，但是不同于其他的比赛，本比赛采取的是擂台赛的形式，n名选手排成一排，每次队伍的第一位和第二位选手进行比赛，
输的一方会排到队尾。
当某位选手取得m连胜时，他将成为最后的赢家，且游戏结束，请问截止到游戏结束，共会进行多少次比赛。
两位选手的比赛结果由他们的战斗力决定，n位选手的战斗力是一个1~n的排列，也就是说他们的战斗力两两不同，不会有平局的情况。
//输入第一行包含两个正整数n，m，分别代表参赛选手数量和取得连胜的要求。(1<=n<=100000，1<=m<=10^9)
//输入第二行包含n个正整数，中间用空格隔开，第i个数表示队伍的第i位选手的战斗力，整体是一个1~n的排列。

#include <iostream>
#include <random>
#include<queue>
using namespace std;
int main()
{
	int m, n;
	while (cin >> n >> m)
	{
		if (n < 2 || m < 0)
		{
			cout << 0 << endl;
			return;
		}
		else if (n == 2)//2个人比赛
			return m;
		else 
		{
			queue<int> test;
			int i = 0, p;
			for (; i < n; i++)
			{
				cin >> p;
				test.push(p);
			}
			int temp[2];
			int score[2] = { 0 };
			temp[0] = test.front();
			test.pop();
			temp[1] = test.front();
			test.pop();
			p = 0;
			while (true)
			{
				p++;//第p场比赛：
				if (temp[0] < temp[1]) //1大0小
				{
					test.push(temp[0]);
					score[1]++;
					score[0] = 0;
					temp[0] = test.front();
				}
				else {
					test.push(temp[1]);
					score[0]++;
					score[1] = 0;
					temp[1] = test.front();
				}
				if (score[0] == m || score[1] == m)
				{
					cout << p << endl;
					break;
				}
			}
		}
	}
	return 0;
}
