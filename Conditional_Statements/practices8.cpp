#include<iostream>
using namespace std;
int main() {
    int day;
    int month;
    int year;
    cout<<"enter the day :"<<endl;
    cin>> day;
    cout<<"enter the month:"<<endl;
    cin >> month;
    cout<<" enter the year:"<<endl;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout<<" its is the leap  year:"<<endl;
    }else{
        cout<<" its is not leap year :"<<endl;
    }
    return 0;
}