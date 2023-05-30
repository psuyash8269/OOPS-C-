#include <iostream>
using namespace std;
class Pens{
    public:
    char color;
    int price;
    
    char getColor(){
        return color;
    }
     int getPrice(){
        return price;
    }
    void setColor(char color){
        color=color;
    }
    void setPrice(int price){
        price=price;
    } 
};
int main(){
    Pens linc;
    linc.color='r';
    linc.price=5;
    cout<<"color is "<<linc.getColor()<<endl;
    cout<<"color is "<<linc.getPrice()<<endl;


    return 0;
}