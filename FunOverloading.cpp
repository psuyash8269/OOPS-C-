//function Overloading
#include<iostream>
using namespace std;
class Calculation{
public:
void sum (double a){
    cout<<"MUlti is : "<<a;
}
void sum (int a){
    cout<<"Sum is : "<<a;
}
void sum (int a,int b,int c){
    cout<<"Sum is : "<<a+b+c;
}

};
int main(){
    Calculation c1;
    c1.sum(10.0);
    c1.sum(2);
    c1.sum(2,3,4);

}