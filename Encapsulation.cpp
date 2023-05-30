#include <iostream>
using namespace std;
class Circle{
    private:
    float area;
    public:
    void setRadius(int r){
        area=3.14*r*r;
    }
    float getArea(){
        return area;
    }

};
int main(){
    Circle c1;
    c1.setRadius(4);
    cout<<c1.getArea();

}