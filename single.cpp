//single inheritance
#include<iostream>
using namespace std;
class Parent{
    public:
    string firstName="*********";
    string lastName="Patel";

};
class Child : public Parent{
    public:
    string firstName="Suyash";
    
};
int main(){
    Child c1;
    cout<<c1.firstName + " " + c1.lastName;
    return 0;
}