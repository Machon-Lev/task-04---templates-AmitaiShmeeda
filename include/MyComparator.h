#pragma once

// Custom comparator struct for floats
struct MyComparator {
    int operator()(float a, float b) const {
        return a - b;
    }
};
