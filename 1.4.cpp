#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;
    cout << "output in Oct unsigned int type: " << oct << testUnint << endl;
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    return 0;
}