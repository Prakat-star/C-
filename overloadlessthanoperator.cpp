#include <iostream>
using namespace std;

class Item
{
private:
    int price, weight;

public:
    Item(int p, int w)
    {
        price = p;
        weight = w;
    }

    // Overload < operator
    bool operator<(Item obj)
    {
        if (price < obj.price)
            return true;

        if (price == obj.price && weight < obj.weight)
            return true;

        return false;
    }

    void display()
    {
        cout << "Price: " << price << " Weight: " << weight << endl;
    }
};

int main()
{
    Item i1(100, 20);
    Item i2(100, 30);

    if (i1 < i2)
        cout << "Item1 is smaller\n";
    else
        cout << "Item2 is smaller\n";

    return 0;
}