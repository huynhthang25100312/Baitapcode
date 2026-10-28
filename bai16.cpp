#include<iostream>
using namespace std;
int main(){
//Nhập vào một số tiền ađồng. Tính số tờ 5.000 đồng nhiều nhất khi đổi từ số tiền a và số tiền còn lại sau khi đổi.
    int a;
    cin>>a;
    while(a%1000!=0){
     cout<<"NHap sai so tien vui long nhap lai: ";
     cin>>a;
    }
    cout<<a%5000<<" "<<a/5000<<endl;
    return 0;
}