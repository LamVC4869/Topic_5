#include <iostream>
#include <fstream>

using namespace std;

int main () {
    int a, b; cin >> a >> b;
    ofstream ofs; ofs.open("out.txt");
    ofs << a + b; ofs.close();
    return 0;
}
