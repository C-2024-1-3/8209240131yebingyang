.#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F, T;
	cout << "���뻪���¶ȣ�";
	cin >> F;
	T = (F - 32) * 5 / 9;
	cout << "���϶�Ϊ��" << fixed << setprecision(2) << T << endl;
	return 0;
}