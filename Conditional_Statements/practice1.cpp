#include<iostream>
using namespace std;
int main(){
    char number ;
    cout << "enter the number  :"<<endl;
    cin>> number;
    if(number % 5){
        cout<< " its number  divisible by five   "<<endl;
    }else{
        cout<< " its number not divisible by five "<<endl;
    }
    return 0;

}