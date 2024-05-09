#include <iostream>
#include <vector>

using namespace std;

int main () {
    string position;
    getline (cin, position);
    int digit;
    vector<int> v;
    while (cin >> digit) v.push_back (digit);
    if (position == "-1") {
        cout << "empty";
        return 0;
    } else if (position[1] == ' ') {
        char x = position[0];
        char y = position[2];
        int begin = x - '0';
        int end = y - '0';
        int i = begin;
        while (i < end) {
            v.erase (v.begin () + begin);
            i++;
        }
        for (vector<int>::iterator it = v.begin (); it != v.end (); it++) {
            cout << *it << " ";
        }
        if (!v.size ()) cout << "empty";
    } else if (position.size () == 1) {
        int pos = stoi (position);
        v.erase (v.begin () + pos);
        for (vector<int>::iterator it = v.begin (); it != v.end (); it++) {
            cout << *it << " ";
        }
        if (!v.size ()) cout << "empty";
    }
    return 0;
}
