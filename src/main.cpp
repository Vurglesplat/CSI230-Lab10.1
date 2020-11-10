/**
* @file main.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Brandon Boras
* @assignment Lecture 10.1
* @date 11/09/2020
* @credits
* original makefile setup based on prof's github
* random number generation from learncpp.com
*/

#include "util.h"

#include <iostream>

using namespace std;

int main()
{
    // seeding the initial 
    std::srand(static_cast<unsigned int>(time(nullptr))); 
    std::rand(); // discarding the first result, srand tends to reproduce the same first value when given similar times

    //In main(), create a vector of strings with at least 5 string objects
    vector<string> stringVec {"this", "is", "a", "vector", "test"};
    cout << "\nThe vector of strings is:";
    for (string curStr : stringVec)
        cout << ' ' << curStr;

    // Call a function called randomElement defined in util.h and implemented in 
    // util.cpp that returns a random element of the vector input variable.
    cout << "\nRandom element of the string vector array: " << randomElement(stringVec) << "\n\n";

    //In main, create a vector of doubles with at least 5 different values.
    vector<double> doubleVec {202.01, 13.2, 3.43, 5.36, 37.8};
    cout << "\nThe vector of doubles is: ";
    for (double curDub : doubleVec)
        cout << "  " << curDub;

    cout << "\nThe sum of " << doubleVec.at(0) << " and " << doubleVec.at(1) << " is " << sum(doubleVec.at(0), doubleVec.at(1)) <<
            "\nThe average of the vector of doubles is " << avg(doubleVec) <<
            "\nThe lowest value in the vector of doubles is " << lowest(doubleVec) << "\n\n";

    // In main, create a multi word string like "A little bird with a yellow bill"
    string multiWordString{"  Lorem  ipsum dolor     sit amet"};
    cout << "\nOriginal string: " << multiWordString <<
            "\ncamelCased string: " << camelCase(multiWordString) << "\n\n";


    return EXIT_SUCCESS;
}