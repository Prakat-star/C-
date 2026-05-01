#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string data;
    cout << "Enter a line to append: ";
    cin.ignore();
    getline(cin, data);
    ofstream out("log.txt", ios::app);
    out << data << endl;
    out.close();
    cout << "Line appended successfully.\n";
    return 0;
}

