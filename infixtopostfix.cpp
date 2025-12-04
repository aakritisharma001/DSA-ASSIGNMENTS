#include <iostream>
using namespace std;

int prec(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    if(c=='^') return 3;
    return 0;
}

int main() {
    string s, out;
    cin>>s;
    char st[100]; int top=-1;

    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(isalnum(c)) out+=c;
        else if(c=='(') st[++top]=c;
        else if(c==')'){
            while(top!=-1 && st[top]!='(') out+=st[top--];
            top--;
        }
        else{
            while(top!=-1 && prec(st[top])>=prec(c)) out+=st[top--];
            st[++top]=c;
        }
    }
    while(top!=-1) out+=st[top--];
    cout<<out;
}