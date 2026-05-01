#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream in("words.txt");
    string word;
    int count = 0;
    while (in >> word) {
        count++;
    }
    in.close();
    cout << "Total words in file: " << count << endl;
    return 0;
}

