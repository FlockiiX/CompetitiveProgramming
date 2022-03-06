#include <iostream>
#include <algorithm>

using namespace std;

int s[4], c = 0;

int main() {
    for (int &i: s) {
        cin >> i;
    }
    sort(s, s + 4);
    for (int i = 0; i < 3; i++) {
        if (s[i] == s[i + 1]) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}