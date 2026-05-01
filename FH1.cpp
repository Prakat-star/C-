#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    ofstream out("info.txt");
    out << name << endl << age;
    out.close();
    ifstream in("info.txt");
    getline(in, name);
    in >> age;
    in.close();
    cout << "\nData read from file:\n";
    cout << "Name: " << name << "\nAge: " << age << endl;
    return 0;
}

