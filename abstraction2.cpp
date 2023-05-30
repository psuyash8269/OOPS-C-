//Abstraction By class
#include<iostream>
using namespace std;
class Calculation{
    public:
    void AreaRectangle(){
        int l,b;
        cin>>l>>b;
        cout<<l*b;    
    }
};
int main(){
    Calculation c1;
    c1.AreaRectangle();
    return 0;
}