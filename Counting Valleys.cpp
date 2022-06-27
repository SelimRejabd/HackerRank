#include<bits/stdc++.h>
using namespace std;

int main() {
    int step;
    string str; cin>>step>>str;
    int height = 0;
    int count = 0;
    for(int i=0;i<step;i++){
        if (str[i]=='U') height++;
        else {
            if (height==0) count++;
            height--;
        }
    }
    if (height<0) count--;
    cout<<count<<endl;   
    return 0;
}
