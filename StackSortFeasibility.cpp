#include <iostream>
using namespace std;

int main(){
    int n, A[100], B[100], S[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];

    int top=-1, bi=0, next=1;
    int ai=0;
    while(ai<n || top!=-1){
        if(ai<n && A[ai]==next){ B[bi++]=A[ai++]; next++; }
        else if(top!=-1 && S[top]==next){ B[bi++]=S[top--]; next++; }
        else if(ai<n){ S[++top]=A[ai++]; }
        else break;
    }

    if(bi==n) cout<<"YES";
    else cout<<"NO";
}