#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("data.txt"); 
    if (file.is_open()) {
        file << "Hello, file!\n";
        file << "This is line 2\n";
        file.close();  // important to close file
        cout << "Data written successfully!\n";
    } else {
        cout << "Could not open file.\n";
    }
    return 0;
}

