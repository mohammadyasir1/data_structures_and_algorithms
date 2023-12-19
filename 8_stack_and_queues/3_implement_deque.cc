#include <bits/stdc++.h>
using namespace std;

#define MAX 10

class dequeue {
	// int arr[MAX];//in online submission this cause time limit exceed error [tle]
	int* arr; 
	int front;
	int rear;
	int size;
public:

	dequeue(int size) {

		this->size = size;
		arr = new int[size];
		front = rear = -1;

	}

	// Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
    	if(isFull())
    		return false;
    	else if(isEmpty())
    		front = rear = 0;
    	else if(rear != size-1 && front == 0)
    		front = size-1;
    	else
    		front--;

    	arr[front] = x;

    	return true;
    }


    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x) {
		if(isFull())
			return false;
		else if(isEmpty())
			front = rear = 0;
		else if(rear == size-1 && front != 0)
			rear = 0;
		else
			rear++;

		arr[rear] = x;

		return true;    	
    }


    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront() {
        if(isEmpty())
        	return -1;

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear)
        	front = rear = -1;
        else if(front == size-1)
        	front = 0;
        else
        	front++;

        return ans;

    }


    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear() {
        if(isEmpty())
        	return -1;

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear)
        	front = rear = -1;
        else if(rear == 0)
        	rear = size-1;
        else
        	rear--;

        return ans;
    }


    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront() {
        if(isEmpty())
        	return -1;

        return arr[front];
    }


    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear() {
        if(isEmpty())
        	return -1;

        return arr[rear];
    }


	// Returns true if the deque is empty. Otherwise returns false.
	bool isEmpty() {
        if(front == -1)
        	return true;

        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull() {
        if((front == 0 && rear == size-1) || (front == rear+1 ))
        	return true;

        return false;
    }
};

int main() {

	dequeue d(5);

	cout << "insert element at rear end \n";
	
	d.pushRear(5);
	d.pushRear(4);

	cout<<"rear element: ";
	cout<<d.getRear()<<endl;	

	d.popRear();
	cout<<"after deletion of rear element, the new rear element: "<<d.getRear()<<endl;
	
	cout << "insert element at front end \n";
	d.pushFront(19);
	d.pushFront(99);

	cout<<"front element: "<<d.getFront()<<endl;

	d.popFront();
	cout<<"after deletion of front element, the new front element: "<<d.getFront()<<endl;


	return 0;
}
