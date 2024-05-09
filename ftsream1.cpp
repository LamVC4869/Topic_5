#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream ifs;
    ifs.open("input.txt");
    int a, b; ifs >> a >> b;
    cout << a + b;
}
