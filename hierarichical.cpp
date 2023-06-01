//Diamond Problem
#include<iostream>
using namespace std;
class BaseClass{
    public:
    int x;
};
class FirstDrived : public BaseClass{
    public:
    int y;
};
class SecondDrived : public BaseClass{
    public:
    int z;
};
class ThirdDrived : public FirstDrived,public SecondDrived{
    public:
    void sum() {
        cout<<"Sum IS : "<<SecondDrived::x+y+z; //if secomdDrive is not written with scope resolution operator(::) Error ocurs called X is ambious
    }
};


int main(){
    ThirdDrived cal;
    cal.SecondDrived::x=10;
    cal.y=2;
    cal.z=3;
    cal.sum();

}