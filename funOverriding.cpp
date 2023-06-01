#include<iostream>
using namespace std;
class Animal{
    public:
    void speed(){
        cout<<"Who run fast "<<endl;
    }
};
class Deer{
    public:
    void speed(){
        cout<<"Deer fast : "<<endl;
    }
};
class Tiger{
    public:
    void speed(){
        cout<<"Tiger fast : "<<endl;
    }
};
int main(){
    Animal a;
    Deer d;
    Tiger t;
    a.speed();
    d.speed();
    t.speed();
}