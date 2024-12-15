#include<iostream>
using namespace std;
double bubbleSort(double a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return 0;
}
int main()
{
	double a[10] = { 64.5, 34.2, 25.1, 12.4, 22.0, 11.2, 90.0 ,22.3, 55.6, 82.9 };
	int n = sizeof(a) / sizeof(a[0]);
	bubbleSort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}