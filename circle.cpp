// Copyright 2022MTHS
// Created by: Mohammed al-essawi
// This program calculates the area and perimeter of a circle
// with radius 15mm

#include <iostream>

#include <cmath>

int main() {
  std::cout << "If a circle has a radius of 15 mm: " << std::endl;
  std::cout << std::endl;
  std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm2." << std::endl;
  std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
  std::cout << "\nDone." << std::endl;
}
