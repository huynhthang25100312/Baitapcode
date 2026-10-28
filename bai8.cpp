#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//Nhap 2 so nguyen a va b Va tinh cac bieu thuc
int a,b;
cin>>a;
cin>>b;
cout<<fixed<<setprecision(3)<<21*a+5*b-2009<< " " << float (21*a*a-5*b)/float(2009*b*b)<<endl;
cout<<fixed<<setprecision(3)<<float(21*a + 5*b*b)/float (2009*b+15)<<endl;
return 0;
}