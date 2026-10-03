#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<" enter number first:"<<endl;
    cin>>a;
    cout<< " enter number second:"<<endl;
    cin>>b;
    if(a>b){
        cout<<" entred number first is greater than second number "<<endl;
    }else if(b>a){
        cout<<"enter number second is greater than first "<<endl;

    }else{
        cout<<" enter number both are  equal :"<<endl;
    }

    return 0;
}