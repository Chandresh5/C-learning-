#include<iostream>
using namespace std;
int main(){
char num;
cout<<"enter the number :"<<endl;
cin>>num;
while( num>0 )
if (num%2==0){
    cout<<"even number "<<endl;
    break;

}else{
    cout<<"prime number"<<endl;
    break;
}
return 0;
}