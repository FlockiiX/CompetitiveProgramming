//============================================================================
// problem-link: https://codeforces.com/problemset/problem/1328/A
// status: accepted
//============================================================================
#include <iostream>
using namespace std;

long long int a, b, m;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (a % b == 0) {
            m = 0;
        } else {
            m = b - (a % b);
        }

        cout << m << endl;
    }

    return 0;
}