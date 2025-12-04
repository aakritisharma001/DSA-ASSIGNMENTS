#include <iostream>
using namespace std;

class Stack {
    int st[100], mn[100], top;
public:
    Stack(){ top=-1; }
    void push(int x){
        if(top==-1){ st[++top]=x; mn[top]=x; }
        else{ st[++top]=x; mn[top]= mn[top-1]<x?mn[top-1]:x; }
    }
    void pop(){ if(top!=-1) top--; }
    int getMin(){ if(top==-1) return -1; return mn[top]; }
};

int main(){
    Stack s;
    s.push(3);
    s.push(5);
    s.push(2);
    s.push(1);
    cout<<s.getMin();
}