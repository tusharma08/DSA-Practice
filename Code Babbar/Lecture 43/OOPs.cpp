#include<iostream>
using namespace std;

class human {
    public:
    int height;
    int weight;
    int age;

    int getheight() {
        return height;
    }
    // int getweight() {
    //     return weight;
    // }
    // int getage() {
    //     return age;
    // }
    void setweight(int w) {
        this ->weight = w;
    }
};

class male : public human {
    public:
    string color;

    void sleep() {
        cout<<"Male is Sleeping"<<endl; 
    }
};

int main() {
    male m1;
    cout<<m1.age<<endl;
    cout<<m1.height<<endl;
    cout<<m1.age<<endl;
    cout<<m1.color<<endl;
    m1.sleep();
    m1.setweight(54);
    cout<<m1.weight<<endl;
    return 0;
}