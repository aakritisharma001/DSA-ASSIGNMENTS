#include <iostream>
using namespace std;

char st[100];
int top=-1;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') st[++top]=s[i];
        else{
            if(top==-1) { cout<<"Not Balanced"; return 0; }
            char c=st[top--];
            if((c=='('&&s[i]!=')')||(c=='{'&&s[i]!='}')||(c=='['&&s[i]!=']')){
                cout<<"Not Balanced"; 
                return 0;
            }
        }
    }
    if(top==-1) cout<<"Balanced"; 
    else cout<<"Not Balanced";
}