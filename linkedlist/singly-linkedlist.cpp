
#include <iostream>

struct Node
{
    int data;

    struct Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

class Linkedlist
{
public:
    Node *head;
    Linkedlist() : head(nullptr) {};

    void insertAthead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    };

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);

        if (head != nullptr)
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            };

            temp->next = newNode;
        }
        else
        {
            head = newNode;
        }
    };

    void insertInMiddle(int value, int x)
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        Node *t2 = nullptr;

        while (temp->data != x)
        {
            temp = temp->next;
        };
        t2 = temp->next;
        temp->next = newNode;
        newNode->next = t2;
    };

    void deleteNode(int value)
    {
        Node *t1 = head;
        Node *t2 = nullptr;

        if (t1 != nullptr && t1->data == value)
        {
            head = t1->next; // Move head to the next node
            delete t1;       // Free the old head
            return;
        }

        while (t1->data != value)
        {
            t2 = t1;
            t1 = t1->next;
        };

        if (t1->next == nullptr)
        {
            t2->next = nullptr;
            delete (t1);
        }
        else
        {
            t2->next = t1->next;

            delete (t1);
        }
    }
    void PrintList()
    {

        Node *temp = head;

        while (temp != nullptr)
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        };

        std::cout << "NULL" << "\n";
    }
};

int main()
{

    Linkedlist list;

    // list.insertAthead(20);
    // list.insertAthead(40);
    // list.insertAthead(90);
    // list.insertAthead(920);
    // list.PrintList();

    // list.insertInMiddle(1000, 40);

    // list.PrintList();

    Linkedlist newList;
    newList.insertAtEnd(20);
    newList.insertAtEnd(40);
    newList.insertAtEnd(90);
    newList.insertAthead(10);
    newList.insertAtEnd(9230);
    newList.PrintList();
    newList.insertInMiddle(1000, 40);
    newList.PrintList();
    newList.deleteNode(90);
    newList.PrintList();
};