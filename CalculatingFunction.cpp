//============================================================================
// problem-link: https://codeforces.com/problemset/problem/486/A
// status: accepted
//============================================================================
#include <iostream>
using namespace std;

long long n, f;
int main() {
    cin >> n;
    if (n % 2 == 0) {
        f = n / 2;
    } else {
        f = ((n + 1) / 2) * -1;
    }

    cout << f << endl;
    return 0;
}