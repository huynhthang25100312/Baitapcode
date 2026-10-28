#include<iostream>
using namespace std;
int main(){
//Nhập một số tiền N đồng, đổi ra xem được bao nhiêu tờ 5.000 đồng, bao nhiêu tờ 2.000 đồng, bao nhiêu tờ 1.000 đồng sao cho tổng số tờ là ít nhất.
    int t5=0,t2=0,t1=0,t;
    cin>>t;
    while(t%1000!=0){
        cout<<"Nhap sai hay lai so tien: ";
        cin>>t;
    }
    t5=t/5000;
    t=t%5000;
    t2=t/2000;
    t=t%2000;
    t1=t/1000;
    cout<<t5<<" "<<t2<<" "<<t1<<endl;
    return 0;   
}
    

