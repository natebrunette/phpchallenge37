#include "BuzzwordCounter.h"

BuzzwordCounter::BuzzwordCounter(
        BuzzwordStringFormatter::Pointer buzzwordStringFormatterPointer,
        BuzzwordProvider::Pointer buzzwordProviderPointer
) {
    this->buzzwordStringFormatterPointer = std::move(buzzwordStringFormatterPointer);
    this->buzzwordProviderPointer = std::move(buzzwordProviderPointer);
}

int BuzzwordCounter::count(std::string& input)
{
    this->buzzwordStringFormatterPointer->stripPunctuationAndLowercase(input);
    BuzzwordProvider::BuzzwordList list = this->buzzwordProviderPointer->getList();

    int buzzwordCount = 0;
    for (auto search : list) {
        if (input.find(search + " ") != std::string::npos) {
            ++buzzwordCount;
        }
    }

    return buzzwordCount;
}
