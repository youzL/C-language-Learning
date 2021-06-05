#include<iostream>
using namespace std;

void Time(int hour,int minute){
    cout<<"Time  "<<hour<<":"<<minute<<endl;
}

int main(){
    cout<<"please enter the number of hour:";
    int hour;
    cin>>hour;
    cout<<"please enter the number of minute:";
    int minute;
    cin>>minute;
    Time(hour,minute);
    return 0;
}