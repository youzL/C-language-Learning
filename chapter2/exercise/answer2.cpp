#include<iostream>
using namespace std;

int longTOma(int);

int main()
{
    cout<<"please input the number of long:";
    int data;
    cin>>data;
    cout<<data<<" long="<<longTOma(data)<<" ma"<<endl;
    return 0;
} // namespace std;

int longTOma(int n){
    return 220*n;
}