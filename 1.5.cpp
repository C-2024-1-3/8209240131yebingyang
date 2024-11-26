.#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F, T;
	cout << "输入华氏温度：";
	cin >> F;
	T = (F - 32) * 5 / 9;
	cout << "摄氏度为：" << fixed << setprecision(2) << T << endl;
	return 0;
}