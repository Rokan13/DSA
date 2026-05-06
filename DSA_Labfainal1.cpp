#include<bits/stdc++.h>
using namespace std;
#define MAX 5

class Stack{

public:
    int arr[MAX];
    int top = -1;

    bool isFull()
    {
        return top == MAX-1;
    }
    bool isEmpty()
    {
        return top == -1;
    }

    void push(int x){
        if (isFull()){
            cout << "stack is full \n";
            return;
        }
        arr[++top] = x;
        cout << "Pushed: "<< x << endl;
        return;
    }

    int pop(){
        if(isEmpty()){
            cout << "stack is empty\n";
            return -1;
        }
        return arr[top--];
    }

    void display()  {
        cout << "Stack: ";
        for(int i = 0; i <= top; i++){
            cout << arr[i] << " ";
            cout<<endl;
        }
     }
};

class Queue {
public:
    int arr[MAX];
    int front = 0, rear = -1;

    bool isFull()
    {
        return rear == MAX - 1;
    }
    bool isEmpty()
    {
        return front > rear;
    }
    void enqueue(int x){
        if(isFull())
        {
            cout << "queue is full\n";
            return;
        }
        arr[++rear] = x;
        cout << "ENqueue: " << x << endl;
    }

    int dequeue()
    {
        if(isEmpty()){
            cout << "QUeue is empty\n";
            return -1;
        }
        return arr[front++];
    }

    void display(){
    cout << "queue: ";
    for(int i = front; i <= rear; i++)
        cout << arr[i] << " ";
    cout << endl;
    }
};

int main(){
    Stack s;
    Queue q;

    cout << "Adiing items \n";
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();

     cout << "\nProcessing items...\n";
    while (!s.isEmpty()) {
        int item = s.pop();
        if (item != -1)
            q.enqueue(item);

        s.display();
        q.display();
    }

    // Step 3: Shipping (Queue)
    cout << "\nShipping items...\n";
    while (!q.isEmpty()) {
        cout << "Shipped: " << q.dequeue() << endl;
        q.display();
    }

    return 0;
}
