#include<iostream>
using namespace std;
int main(){
    int guo[10],gao,ge,n;
    for( n=10;n>=0;n--){
        cin>>guo[n];
    }
    cin>>gao;
    gao+=30;
    
    for( n=10;n>=0;n--){
        if(guo[n]<gao){
            ge++;
        }
    }
    cout<<ge<<endl;
    return 0;
}
