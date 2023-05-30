#include<iostream>
using namespace std;
class Parent{
    public:
    string FirstName = "Micle";
    string LastName = "Jaction";
};
class Child : public Parent{//inherit the property of Parent Class
    public:
    string FistName = "ALEX";

};
int main(){
    Child c1;
    cout<<c1.FirstName + " "+ c1.LastName;
    }