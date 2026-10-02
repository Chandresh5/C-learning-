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

    return 0;
  
}
