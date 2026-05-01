#include <iostream>
using namespace std;

class Test {
private:
    extern int count;   // static data member (only one copy)
public:
    Test() {
        count++;        // increment whenever object is created
    }
    void showCount() {
        cout << "Object number: " << count << endl;
    }
};

// definition of static member OUTSIDE class
int Test::count = 0;

int main() {
    Test t1, t2, t3;    // 3 objects created
    t1.showCount();
    t2.showCount();
    t3.showCount();
    return 0;
}

