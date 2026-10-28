#include<iostream>
using namespace std;
//Nhập vào hai số nguyên a và b. Tính tổng hàng đơn vị của số nguyên avà hàng chục của số nguyên b.
int tinh(int n){
    int i,t=0;
    while(n>n/100){
    i=n%10;
    t=i;
    n/=10;
    }
    return t;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a%10+tinh(b)<<endl;
    return 0;
}