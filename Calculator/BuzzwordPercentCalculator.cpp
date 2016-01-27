#include "BuzzwordPercentCalculator.h"

BuzzwordPercentCalculator::BuzzwordPercentCalculator(
        BuzzwordCounter::Pointer buzzwordCounterPointer,
        WordCounter::Pointer wordCounterPointer
) {
    this->buzzwordCounterPointer = std::move(buzzwordCounterPointer);
    this->wordCounterPointer = std::move(wordCounterPointer);
}

float BuzzwordPercentCalculator::calculatePercentBuzzwordy(std::string& input)
{
    int numberOfBuzzwords = this->buzzwordCounterPointer->count(input);
    int numberOfWords = this->wordCounterPointer->countWordsInString(input);

    return ((float) numberOfBuzzwords / (float) numberOfWords) * 100;
}
