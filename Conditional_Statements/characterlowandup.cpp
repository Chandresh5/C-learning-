#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout << "enter your char:";
    cin >> ch;
    cout << "your char is: " << ch << endl;
    cout << "ASCII value of your char is: " << int(ch) << endl;
    if (ch >= 'a' && ch <= 'z') {
        cout << "its char is lower case" << endl;
    }else if (ch >= 'A' && ch <= 'Z') { 
        cout << "its char is upper case" << endl;
    }
    else if (ch>=65 &&  ch<=90) {
        cout << "its char is upper case" << endl;
    }
    else if (ch>=97 && ch<=122) {
        cout << "its char is lower case" << endl;
    }
    else {
        cout << "its char is not a letter" << endl;
    }
    

    return 0;
}