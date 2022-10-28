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
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertNode(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)temp=temp->next;
    temp->next=n;
    return;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void createCycle(node* &head,int pos){
    node* temp=head, *t2=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    int i=0;
    while(i<pos&&t2!=NULL){
        t2=t2->next;
        i++;
    }
    // cout<<"\n"<<temp->data<<" \n";
    temp->next=t2;
    // cout<<temp->next->data<<" ";
}

node* detectCycle(node* head){
    unordered_set<node*> st;
    while(head!=NULL){
        if(st.find(head)!=st.end()) return head;
        st.insert(head);
        head=head->next;
    }
    return NULL;
}
node* detectCycle2(node* head){
    node* slow=head,*fast=head,*entry=head;
    if(head==NULL || head->next==NULL)return head;  
    while(fast!=NULL&& fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            while(slow!=entry){
                slow=slow->next;
                entry=entry->next;
            }
            return entry;
        }
    }
    return NULL;
}

node* reverse(node* head){
    node* prev=NULL, *next=NULL;
    while(head!=NULL){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node* head=NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,3);
    insertNode(head,6);
    insertNode(head,10);

    display(head);
    cout<<"after rev \n";
    head=reverse(head);
    display(head);
    // createCycle(head,2);
    return 0;
}