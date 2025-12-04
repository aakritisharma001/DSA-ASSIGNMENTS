#include <iostream>
using namespace std;

class Stack {
    int arr[100], top, n;
public:
    Stack(int size) { top = -1; n = size; }
    void push(int x) { if(top==n-1) return; arr[++top] = x; }
    void pop() { if(top==-1) return; top--; }
    int peek() { if(top==-1) return -1; return arr[top]; }
    int isEmpty() { return top==-1; }
    int isFull() { return top==n-1; }
    void display() { for(int i=top;i>=0;i--) cout<<arr[i]<<" "; cout<<endl; }
};

int main() {
    Stack s(100);
    int ch,x;
    while(true){
        cin>>ch;
        if(ch==1){ cin>>x; s.push(x); }
        else if(ch==2){ s.pop(); }
        else if(ch==3){ cout<<s.isEmpty()<<endl; }
        else if(ch==4){ cout<<s.isFull()<<endl; }
        else if(ch==5){ s.display(); }
        else if(ch==6){ cout<<s.peek()<<endl; }
        else break;
    }
}
