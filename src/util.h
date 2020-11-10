/**
* @file util.h
* @brief  holds constants and forwards declarations
*
* @author Brandon Boras
* @assignment Lecture 10.1
* @date 11/09/2020
* @credits
* 
*/

#ifndef UTIL_H
#define UTIL_H

#include <vector>
#include <string>

using namespace std;

/**
* @brief  returns a random string from a vector
* @date 11/09/2020
* @param vector<string> to pull from
* @return the selected random element
*/
string randomElement(vector<string> vecToPullFrom);


// declare the following functions in util.h with implementations in util.cpp

/**
* @brief   returns the sum of doubles
* @date 11/09/2020
* @param double, double - both of the doubles to add together
* @return the actual sum of the two elements
*/
double sum(double dub1, double dub2); 

/**
* @brief  returns the average of doubles
* @date 11/09/2020
* @param vector<double> to use as the collection of nums to average
* @return the average of every item in the vector
*/
double avg(vector<double> vecToGetAvgFrom);

/**
* @brief  returns the smallest doubles value
* @date 11/09/2020
* @param vector<double> to check the values of
* @return  the lowest double in the vector
*/
double lowest(vector<double> vecToGetLowestFrom);



#endif