#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;
};

int main()
{
    int A[5]={1,2,3,4,5};
    Node* head;
    Node* end;
    Node* temp;
    head = new Node;
    head->data=A[0];
    head->next=nullptr;
    end = head;
    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++)
    {
        temp =new Node;
        temp->data=A[i];
        head->next=temp;
        temp->next=nullptr;
        end->next=temp;
        end = temp;

    }
    Node* p = head;
    while(p!=nullptr)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}