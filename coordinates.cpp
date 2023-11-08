// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Nov, 7, 2023
// This program will ask the user
// for their x and y coordinates and it will tell them
// what quadrant or axis it is on with nested try catch

#include <iostream>
#include <string>

int main() {
    // Declare user x and y as string and int
    std::string userXStr;
    std::string userYStr;
    int userXInt;
    int userYInt;

    // Get the user x and y and display a message about the program
    std::cout
        << "This program will ask the user";
    std::cout << " for their x and y coordinates and it will tell them";
    std::cout << " what quadrant or axis it is on.";
    std::cout << "\nEnter your x coordinate: ";
    std::cin >> userXStr;
    std::cout << "Enter your y coordinate: ";
    std::cin >> userYStr;

    try {
        // Convert userXStr to int
        int userXInt = std::stoi(userXStr);

        try {
            // Convert userYStr to int
            int userYInt = std::stoi(userYStr);

            if (userXInt > 0 && userYInt > 0) {
                // Display that the quadrant is the top right
                std::cout << "\n(" << userXInt << "," << userYInt
                          << ") is in the top right quadrant." << std::endl;
            } else if (userXInt > 0 && userYInt < 0) {
                // Display that the quadrant is the bottom right
                std::cout << "\n(" << userXInt << "," << userYInt
                          << ") is in the bottom right quadrant." << std::endl;
            } else if (userXInt < 0 && userYInt > 0) {
                // Display that the quadrant is the top left
                std::cout << "\n(" << userXInt << "," << userYInt
                          << ") is in the top left quadrant." << std::endl;
            } else if (userXInt == 0 && userYInt == 0) {
                // Display that the point is at the origin
                std::cout << "\n(" << userXInt << "," << userYInt
                          << ") is at the origin." << std::endl;
            } else if (userXInt == 0 || userYInt == 0) {
                if (userXInt == 0 && userYInt > 0) {
                    // Display that the axis is the top y-axis
                    std::cout << "\n(" << userXInt << "," << userYInt
                              << ") is on the top y-axis." << std::endl;
                } else if (userXInt == 0 && userYInt < 0) {
                    // Display that the axis is the bottom y-axis
                    std::cout << "\n(" << userXInt << "," << userYInt
                              << ") is on the bottom y-axis." << std::endl;
                } else if (userXInt > 0 && userYInt == 0) {
                    // Display that the axis is the right x-axis
                    std::cout << "\n(" << userXInt << "," << userYInt
                              << ") is on the right x-axis." << std::endl;
                } else {
                    // Display that the axis is the left x-axis
                    std::cout << "\n(" << userXInt << "," << userYInt
                              << ") is on the left x-axis." << std::endl;
                }
            } else {
                // Display that the axis is the left x-axis
                std::cout << "\n(" << userXInt << "," << userYInt
                          << ") is in the bottom left quadrant." << std::endl;
            }
        } catch (std::invalid_argument) {
            // Display that the user x or y was not valid
            std::cout << "\n(" << userXInt << "," << userYInt
                      << ") is not a valid coordinate." << std::endl;
        }
    } catch (std::invalid_argument) {
        // Display that the user x or y was not valid
        std::cout << "\n(" << userXInt << "," << userYInt
                  << ") is not a valid coordinate." << std::endl;
    }
}
