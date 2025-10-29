#include<iostream>
using namespace std;
int main(){
    int *a,*l=NULL;
    int num=8;
    cout<<a<<endl;
    cout<<&num<<endl;
    a = &num;
    cout<<a<<endl;
    cout<<l<<endl;
    l = a;
    cout<<l;
}