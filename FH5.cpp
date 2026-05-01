#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n;
    string name;
    int marks;
    ofstream out("students.txt");
    cout << "How many students? ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
        out << name << " " << marks << endl;
    }
    out.close();
    ifstream in("students.txt");
    cout << "\nStored Data:\n";
    while (in >> name >> marks) {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
    in.close();
    return 0;
}

