#include<iostream>
using namespace std;
int main(){
//Nhập vào chiều dài của một cây mía tính bằng a cm. Chia đều cây mía đó thành các đoạn có độ dài là b cm. Hỏi chia được nhiều nhất mấy đoạn, đoạn còn dư có độ dài bao nhiêu cm.
    int a,b;
    cin>>a>>b;
    cout<<a/b<<" "<<a%b<<endl;
    return 0;
}