/**
* @file util.cpp
* @brief  holds function definitions
*
* @author Brandon Boras
* @assignment Lecture 10.1
* @date 11/09/2020
* @credits
* 
*/
#include "util.h"

#include <cstdlib>
#include <ctime>

string randomElement(vector<string> vecToPullFrom)
{
    // % providing the remainder of a division, allowing no number bigger than the one following %
	return vecToPullFrom.at(std::rand() % vecToPullFrom.size()); 
}

double sum(double dub1, double dub2)
{
    return dub1 + dub2;
}

double avg(vector<double> vecToGetAvgFrom)
{
    double sum{0.0};

    for(double currentDub : vecToGetAvgFrom)
        sum+=currentDub;

    return sum/vecToGetAvgFrom.size();
}

double lowest(vector<double> vecToGetLowestFrom)
{
    // set the first one to the lowest so that it always has a value to compare
    double lowest = vecToGetLowestFrom.at(0);
    
    for(double currentDub : vecToGetLowestFrom)
        if (currentDub < lowest)
            lowest = currentDub;

    return lowest;
}

string camelCase(string originalString)
{
    string camelCasedString{""};
    bool isFirstLetter{true};
    bool isFirstWord{true};

    // a slightly overkill way of handling it, designed to work even if the string starts with spaces
    for(int i = 0; i < originalString.size(); i++)
    {
        // if it's not a whitespace
        if(originalString[i] != ' ')
        {
            // if it's not the first letter of a word,
            // or if it's the first letter of the first word, it must be lowercase
            if(!isFirstLetter || isFirstWord) 
            {
                camelCasedString.push_back(tolower(originalString[i]));
                isFirstWord = false;
                isFirstLetter = false;
            }
            else // it is not the first letter of a word, so it is lowercase
            {
                isFirstLetter = false;
                camelCasedString.push_back(toupper(originalString[i]));
            }
        }
        else
        {
            // if we start a next word it will be the first letter of that word
            isFirstLetter = true;
        }
        
    }
    return camelCasedString;        
}

