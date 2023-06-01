#include<iostream>
using namespace std;
class Parent{
    public:
    virtual int getArea()=0;
    void setHeight(int h){
        H=h;
    }
    void setWidth(int w){
        W=w;
    }
    protected:
    int W,H;
};
class Triangle:public Parent{
    public:
    int getArea(){
        return (W*H)/2;
    }

};
int main(void){
    Triangle t1;
    t1.setHeight(10);
    t1.setWidth(5);
    cout<<"Area of Triangle "<<t1.getArea();
}