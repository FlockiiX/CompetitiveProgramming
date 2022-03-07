//============================================================================
// problem-link: https://codeforces.com/problemset/problem/677/A
// status: accepted
//============================================================================
#include <iostream>
using namespace std;

int n, h, a, sum;
int main() {
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > h) {
            sum++;
        }
        sum++;
    }

    cout << sum << endl;
    return 0;
}
