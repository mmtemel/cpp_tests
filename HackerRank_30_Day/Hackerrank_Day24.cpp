#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

void addToLinkedList(Node **head, int data)
{
    Node *itr = *head;
    if(itr && !itr->next)
    {
        if(itr->data == data)
            return;
        Node *il = new Node();
        il->data = data;
        itr->next = il;
        return;
    }
    while (itr && itr->next)
    {
        // cout<<"iter data:"<<itr->data<<endl;
        itr = itr->next;
        if(itr->data == data)
            return;
    }
    Node *nl = new Node();
    nl->data = data;
    itr->next = nl;
    return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *node = new Node();
    Node **head = &node;
    int N;
    cin >> N;
    int data;
    cin >> data;
    node->data = data;
    for (size_t i = 0; i < N-1; i++)
    {
        int temp;
        cin >> temp;
        addToLinkedList(head, temp);
    }
    Node *temp = *head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}
