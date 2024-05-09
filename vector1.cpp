#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> v;
    int k;
    while (cin >> k) {
        cout << k << ' ';
        v.push_back(k);
    }
    cout << '\n';
    for (vector<int>::reverse_iterator it = v.rbegin (); it != v.rend (); it++) {
        cout << *it << ' ';
    }
    return 0;
}
