#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
//Nhap 3 so nguyena,b,c va tinh cac bieu thuc.
int a,b,c;
cin>>a>>b>>c;
cout<<fixed<<setprecision(3)<<float(21*a*a+5*b*b)/float(2009*c*c+15)<<" "<<float(sqrt(a*a-2*b))/ float (3*c*c+4)<<endl;
return 0;
}