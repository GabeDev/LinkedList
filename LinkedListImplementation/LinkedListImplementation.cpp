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
        cout << n->value<<endl;
        n = n->next;
    }
}
void insertAtFront(Node **head,int Value)
{
    //create node to insert
    Node* toInsert = new Node;

    //put in front of current head
    toInsert->value = Value;
    toInsert->next = *head;

    //update the current head to the new node
    *head = toInsert;
}
void insertAtEnd(Node** head, int Value)
{
    //create node to insert
    Node* toInsert = new Node;

    //if empty add curernt node to make list
    if (*head == NULL)
    {
        *head = toInsert;
        return;
    }
    //make a pointer initialized with head to allow for traversal to the end
    Node* last = *head;
    //if not reached "end" then traverse
    while (last->next != NULL)
    {
        last = last->next;
    }
    //once reached end update the last node to point to  the one to insert
    last->next = toInsert;
}

void insertAtGivenNode(Node** head, int Value)
{

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

    insertAtFront(&head, -1);
    //invoke printlist
    printList(head);

    
}
