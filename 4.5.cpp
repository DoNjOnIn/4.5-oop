// 4.5.cpp 
#include "Square.h"
#include "Linear.h"
#include <iostream>

int main()
{
    Linear a;
    cin >> a;
    a.Show();
    Square b;
    cin >> b;
    b.Show();
    Root* g = new Linear();
    Root* h = new Square();
    cout << typeid(g).name() << endl;
    cout << typeid(*g).name() << endl;
    cout << typeid(h).name() << endl;
    cout << typeid(*h).name() << endl;

    Root* N[2];
    N[0] = &a;
    N[1] = &b;

    N[0]->Show();
    N[1]->Show();
}
