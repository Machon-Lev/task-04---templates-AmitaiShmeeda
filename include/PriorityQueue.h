#pragma once
#include <iostream>
#include <list>
#include <exception>

template <typename T>
class PriorityQueue {
public:
    void push(const T& t); // Insert an element into the priority queue
    T poll(); // Extract the highest priority element from the priority queue

private:
    std::list<T> data; // The list that holds the elements in the priority queue
};

// Implementation of push function (inserts elements in the correct order)
template <typename T>
void PriorityQueue<T>::push(const T& t) {
    typename std::list<T>::iterator it = data.begin();
    while (it != data.end() && t < *it) {
        ++it;
    }
    data.insert(it, t);
}

// Implementation of poll function (removes and returns the highest priority element)
template <typename T>
T PriorityQueue<T>::poll() {
    if (data.empty()) {
        throw std::exception("PriorityQueue empty!");
    }

    T frontElement = data.front();
    data.pop_front();
    return frontElement;
}
