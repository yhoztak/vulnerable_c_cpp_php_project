#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base class" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived class" << std::endl; }
};

void typeConfusionExample() {
    Base* base = new Derived();
    Derived* derived = static_cast<Derived*>(base); // Unsafe type cast
    derived->show(); // Works fine
    delete base; // Safe delete
}

int main() {
    typeConfusionExample();
    return 0;
}