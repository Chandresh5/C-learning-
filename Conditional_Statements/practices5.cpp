#include<iostream>
using namespace std;
int main(){
    int amount,withdrawal;
    
    cout<<" enter the amount :"<<endl;
    cin>>amount;
    cout<<" available balance of user:"<<amount<<endl;
     cout<<" enter  withdrawal amount:"<<endl;
      cin>>withdrawal;
 
if (withdrawal % 100 != 0) {
    cout << "Withdrawal must be in multiples of 100" << endl;
}else if(amount==0){
        cout<< "insufficient balance:"<<endl;

    
}else if (amount < 1000){
    cout<<"low  amount in account :"<<endl;
}
    else  {
        cout<<" withdrawal successful:"<<endl;
    }
return 0;
}