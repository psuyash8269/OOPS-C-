#include <iostream>
using namespace std;
class rectangle{
    public://modifier
    double L,B;
    double getArea(void){
        return L*B;
    }

    
};
int main(){
    rectangle r1;
    r1.L=20;
    r1.B=40;
    cout<<r1.getArea();
}