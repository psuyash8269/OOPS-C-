#include <iostream>
using namespace std;
class Car{
    public:
    char color,brand;
    int price;
    void setColor(char c){
        color=c;

    }
    void setBrand(char b){
        brand=b;
    }
    int setPrice(int p){
        price=p;
    }
    char getColor(){
        return color;
    }
    char getBrand(){
        return brand;
    }
    int getPrice(){
        return price;
            }


};
int main() {
    Car alto;
    alto.setColor('black');
    alto.setBrand('maruti');
    alto.setPrice(450000);
    cout <<"price "<<alto.getPrice()<<endl;
    cout <<"brand "<<alto.getBrand()<<endl;
    cout <<"color "<<alto.getColor()<<endl;
    return 0;
}