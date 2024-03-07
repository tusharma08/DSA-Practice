#include <iostream>
// Adding Class from other file
// #include "Hero2.cpp"
using namespace std;

class Hero
{
private:
    int level;

public:
    Hero()
    {
        cout << "Constructor Created" << endl;
    }
    int health;
    int getlevel()
    {
        return level;
    }
    void setlevel(int l)
    {
        level = l;
    }




    ~Hero() {
        cout<<"destructor is called"<<endl;
    }
};

int main()
{
    Hero a;


    

    // Hero h1; // Statically allocated class
    // cout << "level is " << h1.getlevel() << endl;
    // h1.setlevel(10);
    // cout << "After setter level is " << h1.getlevel() << endl;
    // h1.health = 90;
    // cout << " Health is " << h1.health << endl;

    // Hero *b1 = new Hero; // Dynamically Allocated class
    // b1 -> setlevel(34);
    // cout << "level is " << (*b1).getlevel() << endl;
    // cout << " Health is " << (*b1).health << endl;
    // cout << " Health is " << b1->health << endl;

    // Hero2 h2;
    // cout << "Size of hero 2 class is " << sizeof(h2) << endl; // accessing class from other file hero2

    return 0;
}