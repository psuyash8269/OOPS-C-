//multilevel Inheritance
#include<iostream>
using namespace std;
class Desktop{
    public:
    string Games="We can play Games ";
};
class Mobile: public Desktop{
};
class VideoGames:public Mobile{
};
int main(){
    VideoGames v;
    cout<<v.Games;
}