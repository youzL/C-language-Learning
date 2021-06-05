#include<iostream>
using namespace std;

float LigthYearToKM(int n){
    return n*63240;
}

int main()
{
    cout<<"please input the number of lightyear:";
    int lightyear;
    cin>>lightyear;
    cout<<"astronomical units = "<<LigthYearToKM(lightyear)<<endl;
    return 0;
} // namespace std;