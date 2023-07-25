#pragma once

struct MyComparator {
    int operator()(float a, float b) const {
        return a - b;
    }
};
