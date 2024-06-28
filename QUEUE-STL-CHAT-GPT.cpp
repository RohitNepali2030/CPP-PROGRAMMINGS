#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    // Enqueue elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    // Display the elements in the queue
    std::cout << "Queue elements: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    // Enqueue more elements
    myQueue.push(60);
    myQueue.push(70);

    // Display the front element
    if (!myQueue.empty()) {
        std::cout << "Front element: " << myQueue.front() << std::endl;
    }

    // Display the size of the queue
    std::cout << "Queue size: " << myQueue.size() << std::endl;

    // Dequeue elements
    myQueue.pop();
    myQueue.pop();

    // Display the front element again after dequeue
    if (!myQueue.empty()) {
        std::cout << "Front element after dequeue: " << myQueue.front() << std::endl;
    }

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
