1.��ǿ�Ĳ�һ��������Ӯ�ҡ�
ĳ������n��ѡ�ֲμӣ����ǲ�ͬ�������ı�������������ȡ������̨������ʽ��n��ѡ���ų�һ�ţ�ÿ�ζ���ĵ�һλ�͵ڶ�λѡ�ֽ��б�����
���һ�����ŵ���β��
��ĳλѡ��ȡ��m��ʤʱ��������Ϊ����Ӯ�ң�����Ϸ���������ʽ�ֹ����Ϸ������������ж��ٴα�����
��λѡ�ֵı�����������ǵ�ս����������nλѡ�ֵ�ս������һ��1~n�����У�Ҳ����˵���ǵ�ս����������ͬ��������ƽ�ֵ������
//�����һ�а�������������n��m���ֱ�������ѡ��������ȡ����ʤ��Ҫ��(1<=n<=100000��1<=m<=10^9)
//����ڶ��а���n�����������м��ÿո��������i������ʾ����ĵ�iλѡ�ֵ�ս������������һ��1~n�����С�

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
		else if (n == 2)//2���˱���
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
				p++;//��p��������
				if (temp[0] < temp[1]) //1��0С
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
