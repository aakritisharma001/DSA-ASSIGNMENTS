#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100], st[100];
    cin>>s;
    int top=-1;
    for(int i=0;i<strlen(s);i++) st[++top]=s[i];
    while(top!=-1) cout<<st[top--];
}