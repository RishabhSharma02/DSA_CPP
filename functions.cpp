#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main() {
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"The function returns"<<add(a,b)<<endl;
}