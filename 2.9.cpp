#include<iostream>
using namespace std;
int main()
{
	double money = 0, average, day = 0;
	int i = 2;
	for (; i <= 100;)
	{
		day++;
		money += i * 0.8;
		i *= 2;
	}
	average = money / day;
	cout << "The average money is " << average << " per day." << endl;
	return 0;

}
