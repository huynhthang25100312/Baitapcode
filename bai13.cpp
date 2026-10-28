#include<iostream>
using namespace std;
int main(){
//Nhập vào một số nguyên a có 4 chữ số. Tính tổng các chữ số của a
    int n,t=0,i;
    cin>>n;
    while(n>0){
    i=n%10;
    t+=i;
    n/=10;
    }
    cout<<t<<endl;
    return 0;
}