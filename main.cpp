#include<iostream>
#include"store.h"
using namespace std;

int main()
{
    fruit apple, banana;
    apple = fruit(500, 5);
    banana = fruit(800, 7);
    cout << "Apple Price: " << apple.show() << endl;
    apple * 10;
    cout << "Apple Price: " << apple.show() << endl;
    cout << "Banana Price: " << banana.show() << endl;
    banana * -20;
    cout << "Banana Price: " << banana.show() << endl;
    return 123;
}