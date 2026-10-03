#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks: ";
    cin>>marks;
    if (marks>=90){
    cout << "student is passed with A+ grade";
    }else if (marks>=80 && marks<90){
    cout << "student is passed with AS grade ";
    }else if (marks>=70 && marks<80){
    cout << "student is passed with B+ grade";
    }else if (marks>=60 && marks<70){
    cout << "student is passed with B grade";
    }else if (marks>=50
) {
    cout << "student is passed with C grade";
    }else {
    cout << "student is failed";
    
    }
    return 0;
}