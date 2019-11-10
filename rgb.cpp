// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program calculates all possible combos for RGB colors

#include <iostream>

main() {
    // variables
    int red;
    int green;
    int blue;

    // process & output
    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
            std::cout << "RGB: (" << red << "," << green << "," << blue << ")"
            << std::endl;
            }
        }
    }
}
