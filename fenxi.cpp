#include<iostream>
using namespace std;
int max(int a,int b){
    if (a<b)
    {
        return b;
    }
}
int min (int a,int b)
{
    if (a>b) return b;
}
    int main (){
        int i;
        cin>> i;
        int w [i];
        int j,k,l,xiao,da;
        for(j=i;j>0;j--){
            cin>>w[i-j];
        }
        for (k= i; k>0; k--)
        {
            da = max(w[k],w[k-1]);
            
        }
        for (l=i;l>0;l--)
        {
            xiao = min(w[l],w[l-1]);
            
        }
        int jun,p;
        for(p=i;i>0;p--){
            jun+=w[p];

        }
        int f ;
        cout << da << endl;
        cout<<xiao<<endl;
        f = jun / i;
        cout<<f<<endl;
        return 0;

    }
    
    
