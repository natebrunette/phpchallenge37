#ifndef BUZZWORDS_BUZZWORDPERCENTCALCULATOR_H
#define BUZZWORDS_BUZZWORDPERCENTCALCULATOR_H


#include "../Counter/BuzzwordCounter.h"
#include "../Counter/WordCounter.h"

class BuzzwordPercentCalculator
{
public:
    BuzzwordPercentCalculator(BuzzwordCounter::Pointer buzzwordCounterPointer, WordCounter::Pointer wordCounterPointer);
    float calculatePercentBuzzwordy(std::string& input);

private:
    BuzzwordCounter::Pointer buzzwordCounterPointer;
    WordCounter::Pointer wordCounterPointer;
};


#endif //BUZZWORDS_BUZZWORDPERCENTCALCULATOR_H
