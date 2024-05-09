#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream ifs;
    ifs.open("input.txt");
    int a, b; ifs >> a >> b; ifs.close();
    ofstream ofs;
    ofs.open("output.txt"); ofs << a + b;
    ofs.close();
    return 0;
}
