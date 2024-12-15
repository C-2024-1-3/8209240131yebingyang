#include <iostream>
using namespace std;
int main()
{
	int sum = 1;
	for (int i = 1; i <= 9; i++)
	{
		sum = (sum + 1) * 2;
	}
	cout << "第一天摘桃子个数为" << sum << endl;
	return 0;
}
