#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(nullptr)
    {
    }
    int getData()
    {
        return data;
    }
};

Node *create(int n)
{
    Node *head = nullptr;
    Node *tail = nullptr;
    while (n--)
    {
        int val;
        cin >> val;
        Node *n = new Node(val);
        if (head == nullptr)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *deleteTail(Node *head)
{
    Node *sl = head;
    while (sl->next->next)
    {
        sl = sl->next;
    }
    delete sl->next;
    sl->next = nullptr;
    return head;
}

int main()
{
    int n;
    cin >> n;
    Node *head = create(n);
    print(head);
    deleteTail(head);
    print(head);
    return 0;
}