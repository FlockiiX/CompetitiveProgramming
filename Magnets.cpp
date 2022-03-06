#include <iostream>

using namespace std;

int n, g, m[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < n; i++) {
        if (m[i] != m[i + 1]) {
            g++;
        }
    }
    cout << g << endl;
    return 0;
}