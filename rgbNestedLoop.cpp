// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 1, 2022
// nested loop that prints out all valid RGB colors from 200 - 255

#include <iostream>
#include <string>


int main() {
    // initialize 3 counters
    int counter1;
    int counter2;
    int counter3;

    // generate the rgb color codes
    for (counter1 = 200; counter1 < 255; counter1++) {
        for (counter2 = 200; counter2 < 255; counter2++) {
            for (counter3 = 200; counter3 < 255; counter3++) {
                std::cout << "RGB(" << counter1 << ", "
<< counter2 << ", " << counter3 << ")\n";
            }
        }
    }
}
