#include <iostream>

using namespace std;

int reverse (int n) {
    int temp = 0;
    while (n != 0) {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp;
}

int main () {
    int n;
    int max = -9999;
    while (cin >> n) {
        int temp = reverse (n);
        if (temp > max) max = temp;
    }
    cout << reverse (max);
    return 0;
}
