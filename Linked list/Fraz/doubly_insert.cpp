#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head->prev=n;
    head=n;
}
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(headnext==NULL){
        insertAtHead(head, val);
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    return 0;
}