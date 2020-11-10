/**
* @file util.cpp
* @brief  holds function definitions
*
* @author Brandon Boras
* @assignment Lecture 10.1
* @date 11/09/2020
* @credits
* mersenne twister from learncpp.com
*/
#include "util.h"

#include <cstdlib>
#include <ctime>

string randomElement(vector<string> vecToPullFrom)
{

	return vecToPullFrom.at(std::rand() % vecToPullFrom.size()); // generate a roll of the die here
}

double sum(double dub1, double dub2)
{
    return dub1 + dub2;
}

double avg(vector<double> vecToGetAvgFrom)
{
    ;
}

double lowest(vector<double> vecToGetLowestFrom)
{
    ;
}
