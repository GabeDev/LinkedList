#include <iostream>
using namespace std;

class Node
{
public:
        int value;
        Node* next;
};

void printList(Node *n)
{
    while (n!= NULL)
    { 
        //display value and traverse to next value
        cout << n->value;
        n = n->next;
    }
}
int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    //initialize each node value and linking with "next"
    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    //invoke printlist
    printList(head);
}
