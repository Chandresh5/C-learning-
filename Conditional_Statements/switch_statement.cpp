#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<< "Enter the marks of the student: ";
    cin>> marks;
    switch( marks){
        case 90:
        cout<< "student is eligible for the IIT delhi admission";
        break;

        case 80:
        cout<< "student is eligible for the IIT bombay admission";
        break;
        case 70:
        cout<< "student is eligible for the IIT kanpur admission";
        break;
        case 60:
        cout<< "student is eligible for the IIT kharagpur admission";
        break;
        case 50:
        cout<< "student is eligible for the normal college   admission";
        break;
        default:
        cout<< "student is not eligible for the college admission";
        
 
    }
    return 0;

}
