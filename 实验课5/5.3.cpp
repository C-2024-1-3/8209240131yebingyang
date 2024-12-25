#include <iostream>
using namespace std;
class VVVV {
public:
	int length;
	int width;
	int height;
	void input(int i)
	{
		cout << "第" << i + 1 << "个长方体长为";
		cin >> length;
		cout << "宽为";
		cin >> width;
		cout << "高为";
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
		cout << "第" << i + 1 << "个长方体的体积为";
		v[i].output();
	}
	return 0;
}
