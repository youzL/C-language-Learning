#include<iostream>
using namespace std;

double CtoF(double n){
    return n*1.8+32;
}

int main(){
    cout<<"please enter the number of light years:";
    double Cdegree;
    cin>>Cdegree;
    cout<<CtoF(Cdegree);
    return 0;
}