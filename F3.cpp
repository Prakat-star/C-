#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file;
    file.open("mix.txt", ios::out); 
    if (file.is_open()) {
        file << "C++ is fun!\n";
        file.close();
    }
    file.open("mix.txt", ios::in);
    string word;
    if (file.is_open()) {
        while (getline(file, word)) {
            cout << word << endl;
        }
        file.close();
    }
    return 0;
}

