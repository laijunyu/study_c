#include<iostream>
using namespace std;
int kai,tmp,gai;
int diuhuan(int a){
    return a/3;
}
int fu (int b){
    return b%3;
}
int main(){
    cin>>kai;
    gai =kai;
    while(gai>3){
        tmp =fu(gai);
        kai += diuhuan(gai);
        gai =tmp +diuhuan(gai);
    }
    cout<<kai<<endl;
    return 0;
}