#include<iostream>
using namespace std;

class fruit {
public:
    // constructor
    fruit()
    {
        price = 200; many = 2; day = 12; // default values
    }
    fruit(float p, int n)
    {
        price = p;
        many = n;
        day = 12;
    }
    fruit(float p, int n, int d)
    {
        price = p;
        many = n;
        day = d;
    }

    // member data
    int many;
    float price;
    int day;

    // member function
    float show();
    void show_all()
    {
        cout << "price: " << price << " many: " << many << " day: " << day << endl;
    }
    //operator overloading
    void operator*(float);
};
