#include <iostream>
using namespace std;

int main() {
    int n, t[100], st[100], idx[100], top=-1, ans[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>t[i];

    for(int i=n-1;i>=0;i--){
        while(top!=-1 && t[idx[top]]<=t[i]) top--;
        if(top==-1) ans[i]=0;
        else ans[i]=idx[top]-i;
        idx[++top]=i;
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}