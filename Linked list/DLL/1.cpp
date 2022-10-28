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
    node* next,*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    n->next=head;
    head=n;
    // return n;
}
void addNode(node *&head, int pos, int data)
{
    node* n=new node(data);
    int i=0;
    node* temp=head;
    while(temp->next!=NULL&&(i<pos)){
        temp=temp->next;
        ++i;
    }
    node* t=temp;
    node* tt=temp->next;
    t->next=n;
    n->next=tt;

    n->prev=temp;
    tt->prev=n;
}
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
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
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    addNode(head, 2,9);
    display(head);

    return 0;
}