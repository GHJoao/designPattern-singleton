#include <iostream>
#include "singleton.h"

using namespace std;

int main()
{

    Singleton* first = Singleton::getInstance();
    Singleton* second = Singleton::getInstance();

    first->setData("Changing the first one, changes the second one");

    cout << first->getData() << endl;
    cout << second->getData() << endl;

    second->setData("Changing the second one, changes the first one");

    cout << first->getData() << endl;
    cout << second->getData() << endl;

    return 0;
}
