#include<iostream>
using namespace std;
int main(){
    int pincode,amount,withdrawal;
    int remaining;
    cout<<" enter user pincode:"<<endl;
    cin>>pincode;
    cout<<" enter the amount :"<<endl;
    cin>>amount;
    cout<<" available balance of user:"<<amount<<endl;
     cout<<" enter  withdrawal amount:"<<endl;
      cin>>withdrawal;
     
    if(amount<=100){
        cout<<"withdrawal successfully: "<<endl;
        
    }else if (withdrawal>amount){
        cout<<"insufficient amount"<<endl;
    }else if(amount==0){
        cout<< "insufficient balance:"<<endl;

    
}else if ( remaining = amount-withdrawal){
    cout<<"remaining amount :"<<remaining<<endl;
}
    else{
        cout<<" withdrawal successful:"<<endl;
    }
return 0;
}