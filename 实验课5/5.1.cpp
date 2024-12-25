
#include <iostream>
using namespace std;
class Time {

private:
	int hour;
	int minute;
	int sec;
public:
	void showtime()
	{
		cin >> hour >> minute >> sec;
		cout << hour << ";" << minute << ";" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.showtime();
	return 0;
