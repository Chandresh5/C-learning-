#include<iostream>
using namespace std;
int main(){
    int finalprices;
    int shoping ;
    double discount;
    double percentage;
    cout<<" enter the  shoping :"<<endl;
    cin>>shoping;
    
    if(shoping>=5000  ){
        percentage =20;
        discount= shoping*(percentage / 100);
            finalprices = shoping-discount;
        cout<<" total amount is :"<< finalprices<<endl;
    }else if(shoping<=4000 ){
         percentage =15;
        discount= shoping*(percentage  / 100);
            finalprices = shoping-discount;
        cout<<" total amount is :"<< finalprices<<endl;
    }else  if(shoping<=3000   ){
        percentage = 10;
        discount= shoping*(percentage  / 100);
            finalprices = shoping-discount;
        cout<<" total amount is :"<< finalprices<<endl;
    }else  if(shoping<=2000 ){
       percentage = 8;
        discount= shoping*(percentage / 100);
            finalprices = shoping-discount;
        cout<<" total amount is :"<< finalprices<<endl;
    }else  if(shoping<=1000 ){
        percentage =5;
        discount= shoping*(percentage / 100);
            finalprices = shoping-discount;
        cout<<" total amount is :"<< finalprices<<endl;
    }
    return 0;
}
