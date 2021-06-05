#include<iostream>
using namespace std;

void mice(){
    cout<<"Three blind mice"<<endl;
}

void run(){
    cout<<"See how they run"<<endl;
}

int main(){
    for (int i = 0; i < 2; i++)
    {
        /* code */
        mice();
    }

        for (int i = 0; i < 2; i++)
    {
        /* code */
        run();
    }
    return 0;
    
}