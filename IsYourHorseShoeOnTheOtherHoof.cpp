//============================================================================
// problem-link: https://codeforces.com/problemset/problem/228/A
// status: accepted
//============================================================================
#include <iostream>
#include <algorithm>
using namespace std;

int c, s[4];
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