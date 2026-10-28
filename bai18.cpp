#include<iostream>
using namespace std;
int main(){
//Nhập vào tổng số giây. Hãy đổi ra giờ:phút:giây.
    int n,h=0,m=0,s=0;
    cin>>n;
h=n/3600;
n=n%3600;
m=n/60;
n=n%60;
s=n;
cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}