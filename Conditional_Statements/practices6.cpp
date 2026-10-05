#include<iostream>
using namespace std;
int main(){
    std:: string username = "chandresh";
    cout<<"enter your username:"<<endl;
    int passwords;

    cin>>username;
    if(username =="chandresh"){
        cout<<" your passwords:"<<endl;
        cin>>passwords;
    } if(passwords == 782383){
        cout<<" login succesfully:"<<endl;
    }else  {
        cout<<"enter username wrong:"<<endl;
    }else{
        cout<<"enter passwords wrong:"<<endl;
    }
    return 0;
} 