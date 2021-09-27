// queuePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A queue is a a FIFO (first in first out) data structure
// Example: people standing in front of a line get served first or using a printer
// or online orders
//

#include <iostream>
#include<queue>
using namespace std;

/*void printQueue(queue<int> que) {
    while (!que.empty()) {
        cout << que.front() << endl;
        que.pop();
    }
}*/

void selectionSort(int arr[]){
    for (int i = 0; i < 4; i++) {
        int min = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min]){
                min = j;
            }
        }

        if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
 }

int main()
{
    /* example of basic queue functions
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Size is " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;
    cout << "Last element is " << myQueue.back() << endl;

    cout << "My queue: " << endl;
    printQueue(myQueue);
    */

    /* Selection Sort Algo*/
    /*formula
    for (i = 0; i < n - 1; i++) {
        // set current element as the min
        min = i;

        //check if element is the min

        for (j = i + 1; j < n; j++) {
            if array[j] < array[min]{
                min = j;
            }
        }
        //swap the min and current element
        if (min != i) {
            swap array[min] and arr[i];
        }
    }*/

    int arr[5];
    cout << "Enter 5 integers: \n";

    //get user input for the array
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    //print out the array elements
    cout << "The unsorted elements are: \n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "The sorted elements are: \n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;





    return 0;
}

