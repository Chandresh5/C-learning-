#include<iostream>
using namespace std;
int main(){
    int unit;
    cout<<" enter number of unit used by user:"<<endl;
    cin>>unit;
    

    if (unit>=0 && unit<=100){
        int   bill1 =unit*2;
        cout<<" electricity bill :" << bill1 << endl;

    }else if (unit>=100 && unit<=200){
        int bill2 =(100*2)+((unit-100)*3);
        cout<<" electricity bill :" << bill2 << endl;
    
    }else if (unit>=200 && unit<=300){
        int bill3 =(100*2)+(100*3)+((unit-200)*5);
        cout<<" electricity bill :" << bill3 << endl;
    }else if (unit>300){
        int bill4=(100*2)+(100*3)+(100*5)+((unit-300)*7);
        cout<<" electricity bill :" << bill4<< endl;
    }else{
        cout << "Invalid input." << endl;
    }
}