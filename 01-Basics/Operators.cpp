#include<iostream>
using namespace std;
int main(){
    // arithemetic operators 

    int ans = ( 25 / (double) 10); // assigment ke like used karte hai 
    cout << ans << endl ;
 // relational operators
 cout << ( 25 > 10) << endl ; // true = 1 , false = 0
 cout << ( 25 < 10) << endl ; // true = 1 , false = 0
 cout << ( 25 >= 10) << endl ; // true = 1 , false = 0
 cout << ( 25 <= 10) << endl ; // true = 1 , false = 0
 cout << ( 25 == 10) << endl ; // true = 1 , false = 0
 cout << ( 25 != 10) << endl ; // true = 1 , false = 0
 cout << ( 25 != 25) << endl ; // true = 1 , false = 0
cout << ( 25 <= 25) << endl ; // true = 1 , false = 0   
// logical operators
cout <<( ( 25 > 10)&& (25>10))<< endl ; // true = 1 , false = 0
cout <<( ( 25 < 10)  || ( 25 >10) ) <<endl ; // true = 1 , false = 0
cout <<( !( 25 < 10) ) << endl ; // true = 1 , false = 0
 // unary operators 
 int a=12;
 int b=a++;// kaam; update 
 cout << b << endl ; // 12
 cout << a << endl ;// 13
 int c = ++a ;
 cout << c << endl ; // 14
 int d = a--;
 cout << d << endl ; // 14
 int d1 =--a;
 cout << d1 << endl ; // 12
    return 0;
  
}
