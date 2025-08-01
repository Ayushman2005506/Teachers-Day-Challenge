#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string p;
        cin >> p;

        if (p.length() > 10) {
            cout << p[0] << p.length() - 2 << p.back() << "\n";
        } else {
            cout << p << "\n";
        }
    }

    return 0;
}
