#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() {
        cout << "Halo! Saya function dari Base Class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << " Halo! Saya function dari Derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}