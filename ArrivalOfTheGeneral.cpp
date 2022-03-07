//============================================================================
// problem-link: https://codeforces.com/problemset/problem/144/A
// status: accepted
//============================================================================
#include <iostream>
using namespace std;

int n, maxValue, maxIndex, minIndex, a[100], minValue = 100;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxValue) {
            maxValue = a[i];
            maxIndex = i;
        }

        if (a[i] <= minValue) {
            minValue = a[i];
            minIndex = i;
        }
    }

    if (maxIndex > minIndex) {
        minIndex++;
    }

    int f = maxIndex + --n - minIndex;
    cout << f << endl;
    return 0;
}