// queuePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A queue is a a FIFO (first in first out) data structure
// Example: people standing in front of a line get served first or using a printer
// or online orders
//

#include <iostream>
#include<queue>
using namespace std;

void printQueue(queue<int> que) {
    while (!que.empty()) {
        cout << que.front() << endl;
        que.pop();
    }
}

int main()
{
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Size is " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;
    cout << "Last element is " << myQueue.back() << endl;

    cout << "My queue: " << endl;
    printQueue(myQueue);

    return 0;
}

