#include <iostream>
#include <stack>

using namespace std;

class Queue {
private:
    stack<int> inbox; 
    stack<int> outbox; 

public:

    void enqueue(int x) {
        inbox.push(x);
    }

    int dequeue() {

        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
   
        if (outbox.empty()) {
            cerr << "Queue is empty!\n";
            return -1;
        }

        int frontElement = outbox.top();
        outbox.pop();
        return frontElement;
    }

    bool isEmpty() {
        return inbox.empty() && outbox.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl; 

    return 0;
}
