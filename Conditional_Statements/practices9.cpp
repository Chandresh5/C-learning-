#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter the first side :"<<endl;
    cin>>a;
    cout<<" enter the second side:"<<endl;
    cin>>b;
    cout<<"enter the third side of tringle:"<<endl;
    cin>>c;
    if ((a + b > c) && (b + c > a) && (a + c > b)){
        cout<<"its is valid triangle :"<<endl;
    }else if(a == b && b == c){
        cout<<" its is equilateral tringle:"<<endl;
    }else if (a == b || b == c || c == a){
        cout<<" its isosceles triangle :"<<endl;
    }else if (a != b && b != c && c != a){
        cout<<" its scalene triangle:"<<endl;
    }else {
        cout<<" its is not  a tringle:"<<endl;
    }
return 0;

}