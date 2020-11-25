// Copyright (C) 2002 Donggeun Lim All rights reserved
//
// Created by Donggeun Lim
// Created on November 2020
// This program calculates the area and perimeter of a rectangle

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of the rectangle (mm):" << std::endl;
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm):" << std::endl;
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²" << std::endl;
    std::cout << "Perimeter is " << perimeter << "mm" << std::endl;
}
