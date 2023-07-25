#pragma once
#include <iostream>
#include <list>
#include <exception>

template <typename T>
class PriorityQueue {
public:
    void push(const T& t);
    T poll();

private:
    std::list<T> data;
};

template <typename T>
void PriorityQueue<T>::push(const T& t) {
    typename std::list<T>::iterator it = data.begin();
    while (it != data.end() && t < *it) {
        ++it;
    }
    data.insert(it, t);
}

template <typename T>
T PriorityQueue<T>::poll() {
    if (data.empty()) {
        throw std::exception("PriorityQueue empty!");
    }

    T frontElement = data.front();
    data.pop_front();
    return frontElement;
}
