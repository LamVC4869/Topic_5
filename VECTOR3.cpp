#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isSquareNumber (int n) {
    return int (sqrt (n)) == sqrt (n);
}

int main () {
    int digit;
    vector<int> v;
    while (cin >> digit) if (!isSquareNumber (digit) && digit % 2 == 0) v.push_back (digit);
    for (int i = 0; i < v.size (); i++) {
        for (int j = i + 1; j < v.size (); j++) {
            if (v[i] > v[j]) {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    for (auto x : v) cout << x << " ";
    return 0;
}
