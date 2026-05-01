#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream out("lines.txt");
    out << "Line 1: C++\n";
    out << "Line 2: File Handling\n";
    out << "Line 3: Rocks!\n";
    out.close();
    ifstream in("lines.txt");
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();
    return 0;
}

