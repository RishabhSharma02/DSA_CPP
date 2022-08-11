#include <iostream>
using namespace std;
int main(){
    int age ;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>150 || age<0){
        cout<<"Invalid age"<<endl;

    }
    if(age>=18){
        cout<<"valid age"<<endl;
    }
    else{
        cout<<"Invalid age"<<endl;
    }
}