��Ӣ����ĸa - z���ֱ��ʾ��ֵ0 - 25, �γ�һ��26���Ƶ���ֵ��ʾ������Ҫ��дһ��������
����a - z��ʾ��26������ֵ���ַ�����ת��Ϊ��Ӧ��10������ֵ��


����
���������ж��飬ÿ��ռһ�У��������a - z֮����ַ���

//�������룺
ba

bcd

gibbon

goodboy

���
����Ӧ��ʾ��10��������

//���������
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