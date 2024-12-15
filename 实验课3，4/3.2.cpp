#include <iostream>
using namespace std;

bool is_prime(int num)
{
	if (num <= 1)
		return false;
	for (int i = 2; i <= num / i; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int num = 2;
	for (int k = 0; k < 20; k++)
	{
		for (int i = 0; i < 10; num++)
		{
			if (is_prime(num))
			{
				cout << num << " ";
				i++;
			}
		}
		cout << endl;
	}
	return 0;
}
