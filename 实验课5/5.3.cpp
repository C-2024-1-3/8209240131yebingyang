#include <iostream>
using namespace std;
class VVVV {
public:
	int length;
	int width;
	int height;
	void input(int i)
	{
		cout << "��" << i + 1 << "�������峤Ϊ";
		cin >> length;
		cout << "��Ϊ";
		cin >> width;
		cout << "��Ϊ";
		cin >> height;
	};
	void output()
	{
		cout << length * width * height << endl;
	}
};
int main()
{
	VVVV v[3];
	for (int i = 0; i < 3; i++) {
		v[i].input(i);
	}
	for (int i = 0; i < 3; i++) {
		cout << "��" << i + 1 << "������������Ϊ";
		v[i].output();
	}
	return 0;
}
