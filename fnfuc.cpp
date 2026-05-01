// A friend function can access the private members of class
#include<iostream>
using namespace std;

class Test
{
    private:
        int x;

    public:
        Test()
        {
            x= 67;
        }
        friend void show(Test);
        
};

void show(Test t)
{
    cout<<t.x;
}

int main(){
    Test t1;
    show(t1);
    return 0;
}
