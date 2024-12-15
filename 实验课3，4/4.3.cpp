#include <iostream>
using namespace std;
int main() {
    const int N = 100;
    int l[N] = { 0 };
    for (int s = 1; s <= N; s++) {
        for (int k = s; k <= N; k += s) {
            l[k - 1] = 1 - l[k - 1];
        }
    }

    cout << "开着的存物柜号码：";
    for (int i = 0; i < N; i++) {
        if (l[i] == 1) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;
    return 0;
}
