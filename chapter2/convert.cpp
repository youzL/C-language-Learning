#include<iostream>
int stonetolib(int);

int main(){
    using namespace std;

    int stone;
    cout<<"Enter the weight in stone:";
    cin>>stone;
    int pounds = stonetolib(stone);
    cout<<stone<<" stone=";
    cout<<pounds<<" pounds."<<endl;
    return 0;
}

int stonetolib(int sts){
    return 14*sts;
}