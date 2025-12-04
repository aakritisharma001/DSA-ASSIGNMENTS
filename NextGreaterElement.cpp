#include <iostream>
using namespace std;

int main() {
    int n, arr[100], st[100], top=-1, ans[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=n-1;i>=0;i--){
        while(top!=-1 && st[top]<=arr[i]) top--;
        if(top==-1) ans[i]=-1;
        else ans[i]=st[top];
        st[++top]=arr[i];
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}