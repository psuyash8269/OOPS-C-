//multiple level inheritance
#include<iostream>
using namespace std;
class Telephone{
    public:
    string TelephoneWork="We can Call";
};
class Desktop{
    public:
    string DesktopWork="We can search Anythink";
};
class Camera{
    public:
    string CameraWork="We can Click Photos";
};
class Mobile : public Telephone,public Desktop,public Camera {
};
int main(){
    Mobile oppo;
    cout<<"IN MOBILE PHONE " + oppo.DesktopWork +"\n"+ oppo.TelephoneWork +"\n"+ oppo.CameraWork;
}