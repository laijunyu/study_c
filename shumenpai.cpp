#include <iostream>
using namespace std;

    int n[4] = {0,0,0,0};
    int j = 0;

    void jingyi(int a){
        // 注意 a+1 可能越界，如果 a==3 需要特殊处理
        
        n[a] = 0;
        n[a+1] += 1;
        
    }

    void panduan(int b){
        if (n[b] == 2) {
            j++;
        }
    }

    int main(){
        while (1) {
            n[0]++;
            

            if (n[0] > 9) jingyi(0);
            if (n[1] > 9) jingyi(1);
            if (n[2] > 9) jingyi(2);
            if (n[3] > 9) jingyi(3);
            panduan(0);
            panduan(1);
            panduan(2);
            panduan(3);
            cout<<n[3]<<n[2]<<n[1]<<n[0]<<endl;

            if (n[3]==2 && n[1]==2 && n[2]==0 && n[0]==0) break;
        }
        cout << j << endl;
        return 0;
    }
 
