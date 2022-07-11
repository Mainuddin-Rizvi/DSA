#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&tail, Node *&head, int data, int index)
{
    Node *temp = head;
    int i = 1;
    if (index == 1)
    {
        insertAtHead(head, data);
        return;
    }
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int i = 1;
        while (i < position)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    printList(head);
    insertAtHead(head, 12);
    insertAtHead(head, 14);
    printList(head);
    insertAtTail(tail, 89);
    insertAtTail(tail, 99);
    insertAtPosition(tail, head, 100, 3);
    printList(head);
    deleteNode(3, head);
    printList(head);
    return 0;
}