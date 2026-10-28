#include<iostream>
using namespace std;
int main(){
//Tinh so ghe it nhat cho 3 phong hoc khi biet so hoc sinh a,b,c.
    int a,b,c;
    cin>>a>>b>>c;
    while(a<0||b<0||c<0||a>100||b>100||c>100){
        cout<<"Nhap lai a,b,c: ";
        cin>>a>>b>>c;
    }
    cout<<a/2+a%2+b/2+b%2+c/2+c%2<<endl;
    return 0;

}