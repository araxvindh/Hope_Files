
#include<bits/stdc++.h>

using namespace std;

class Node{

public:
    int data;
    Node*next;

public:
    Node(int data1,Node*next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

};

Node*convertArrtoLL(vector<int>arr)
{
    Node*head=new Node(arr[0]);
    Node*mover=head;

    for(int i=1;i<arr.size();i++)
    {
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
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
