
#include<bits/stdc++.h>

using namespace std;

class Node{

public:
    int data;
    Node*next;
    Node*prev;

public:
    Node(int data1,Node*next1,Node*prev1)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        prev=nullptr;
    }

};

Node*convertArrtoLL(vector<int>arr)
{
    Node*head=new Node(arr[0]);
    Node*prev1=head;

    for(int i=1;i<arr.size();i++)
    {
        Node*temp=new Node(arr[i],nullptr,prev1);
        prev1->next=temp;
        prev1=prev1->next;
    }

    return head;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node*head= convertArrtoLL(arr);

    //cout<<head->data;
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<< temp->data<<" ";
        temp=temp->next;
    }
}

