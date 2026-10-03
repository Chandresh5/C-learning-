#include<iostream>
using namespace std;
int main(){
    int marks ;
        cout<<" enter the  student  marks:"<<endl;
        cin>> marks;
        if(marks>=90){
            cout<<" student pass with A grade:"<<endl;

        }else if(marks>=80 && marks>90){
        cout<<"student pass with B grade:"<<endl;
        }else if(marks>=70 && marks>80){
            cout<<" student pass C grade:"<< endl;

        }else if (marks>=60 && marks>70){
            cout<<" student pass D grade:"<< endl;

        }else{
         cout<<" student fail "<< endl;
        }
        
 return 0;

}