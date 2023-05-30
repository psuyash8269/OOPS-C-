//function overriding
#include<iostream>
using namespace std;
class Animal{
    public:
    void Speed(){
        cout<<"Who run very Fast "<<endl;
    }
};
class Tiger:public Animal{
    public:
    void Speed(){
        cout<<"Tiger run very Fast "<<endl;
    }
};
class Deer:public Animal{
    public:
    void Speed(){
        cout<<"Deer run very Fast "<<endl;
    }
};
int main(){
    Animal a;
    Deer d;
    Tiger t;
    a.Speed();
    d.Speed();
    t.Speed();  
}