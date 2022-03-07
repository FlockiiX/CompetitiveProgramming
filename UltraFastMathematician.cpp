//============================================================================
// problem-link: https://codeforces.com/problemset/problem/61/A
// status: accepted
//============================================================================
#include <iostream>
#include <string>
using namespace std;

string a, b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) {
            a[i] = '0';
        } else {
            a[i] = '1';
        }
    }

    cout << a << endl;
    return 0;
}