#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;

    }
};
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    int n =0;
    void push(int x){
        Node* temp = new Node(x);
         n++;
       temp->next= top;
       top = temp;

    }
    void pop(){
        
        if(top==NULL)return;
        top = top->next;
        n--;
    }
    void peek(){
        Node* temp = top;
        cout<<temp->data;
        
    }
    void size(){
        cout<<n;

    }
    void display(){
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }




    

};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    

    s.display();
    cout<<endl;
    s.pop();
    s.display();
    cout<<endl;
    s.peek();
    cout<<endl;
    s.push(30);
    s.size();
  
    

}