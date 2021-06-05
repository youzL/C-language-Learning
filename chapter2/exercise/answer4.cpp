#include<iostream>
using namespace std;

int month(int age){
    return age*12;
}

int main(){
    cout<<"please input your age:";
    int age;
    cin>>age;
    if(age<=0&&age>120){
        cout<<"please input the right age"<<endl;
        cin>>age;
    }else
    {
        cout<<month(age);
    }
    return 0;
    
}