#include<iostream>
using namespace std;
int main(){
     int akash ,gulabo;
     {
     cout << "enter your   akash age: ";
     cin >> akash;
     if (akash >=18){
         cout << "akash eligible for marriage" << endl;
     }else{
         cout << "akash not eligible for marriage" << endl;
     }
     cout << "enter your gulabo age: ";
        cin >> gulabo;
         if (gulabo >=18){
             cout << "gulabo eligible for marriage" << endl;
         }else{
             cout << "gulabo not eligible for marriage" << endl;
         }
     }
     // secod example 
     int n;
     cout << "enter a number: ";
     cin >> n;
     if (n>=0){
        cout <<"positive ";
        }else{
            cout <<"negative ";
     }
     
     // third example  odd and even 
     int d;
     cout << "enter d enter :";
     cin >>d;
     if (d%2==0){
        cout << " its number is even"<< endl;

     }else{
        cout <<" its number is odd "<< endl;
     }

     return 0;
}