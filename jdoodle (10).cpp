#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called: Product object created." << endl;
    }

    ~Product() {
        cout << "Destructor called: Product object destroyed." << endl;
    }

    void printDetails() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Price: $" << price << endl;
    }
};

int main() {
    Product item(501, "Gaming Keyboard", 59.99);

    item.printDetails();

    return 0;   
}
