#include <iostream>
using namespace std;
int main (){
    int n ;
    cout << "enter a number: ";
    cin >> n;
    cout << (n>=0 ? "positive" : "negative") << endl;
    int age;
    cout << "enter your age: ";
    cin >> age;
    cout << (age>=18 ? "eligible for marriage" : "not eligible for marriage") << endl;
    return 0;
    
}