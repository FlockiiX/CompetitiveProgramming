#include <iostream>

using namespace std;

int n, p, q, r;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        if ((q - p) >= 2) {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}