#include<iostream>
using namespace std;
int ���Լ��(int a, int b)
{
	if (b == 0)
		return a;
	else
		���Լ��(b, a % b);
}
int ��С������(int a, int b)
{
	int k = ���Լ��(a, b);
	return a * b / k;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "���Լ��Ϊ��" << ���Լ��(m, n) << endl;
	cout << "��С������Ϊ��" << ��С������(m, n) << endl;
	return 0;
}