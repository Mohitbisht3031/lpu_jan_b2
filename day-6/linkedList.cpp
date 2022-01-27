
// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node*next;

    Node(int n){
        data = n;
        //next = NULL;
        next = nullptr;
    }
};

Node* makeLL(){

    int data;
    cin>>data;

    Node* h = NULL;
    Node*temp = NULL;

    while(data != -1){ //taking -1 as the sign that user doesn't want to give i/p

        Node*newNode = new Node(data);

        if(h == NULL){
            h = newNode;
            temp = h;
        }else{
            temp->next = newNode;
            temp = newNode;

        }
        cin>>data;
    }

    return h;
}

void print(Node*head){

    Node*t = head;

    while(t != NULL){
        cout<<t->data<<"->";
        t = t->next;
    }
    return;
}

int main(){

    Node* head = makeLL();
    print(head);

  return 0;
}

