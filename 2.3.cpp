#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "������һ���ַ�: ";
    cin >> a;
    if (a >= 'a' && a <= 'z')
        cout << "��дΪ: " << static_cast<char>(a - 'a' + 'A') << endl;
    else
        cout << "����ַ���ASCII��ֵ: " << a + 1 << endl;
    return 0;
}
