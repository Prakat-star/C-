#include <iostream>
using namespace std;

class B;  // forward declaration

class A {
private:
    int a;
public:
    void setA(int x) { a = x; }
    friend void swapData(A &, B &);
    friend int add(A, B);
};

class B {
private:
    int b;
public:
    void setB(int y) { b = y; }
    friend void swapData(A &, B &);
    friend int add(A, B);
};

int add(A x, B y) {
    return x.a + y.b;
}

void swapData(A &x, B &y) {
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main() {
    A obj1;
    B obj2;

    obj1.setA(2);
    obj2.setB(3);

    cout << "Before swapping:" << endl;
    cout << "A = 2, B = 3" << endl;

    cout << "\nSum = " << add(obj1, obj2) << endl;

    swapData(obj1, obj2);

    cout << "\nAfter swapping:" << endl;
    cout << "A = 3, B = 2" << endl;

    return 0;
}

