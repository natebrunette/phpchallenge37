#ifndef BUZZWORDS_BUZZWORDCOUNTER_H
#define BUZZWORDS_BUZZWORDCOUNTER_H


#include "../Formatter/BuzzwordStringFormatter.h"
#include "../Provider/BuzzwordProvider.h"

class BuzzwordCounter
{
public:
    typedef std::unique_ptr<BuzzwordCounter> Pointer;

    explicit BuzzwordCounter(BuzzwordStringFormatter::Pointer buzzwordStringFormatterPointer, BuzzwordProvider::Pointer buzzwordProviderPointer);
    int count(std::string& input);

private:
    BuzzwordStringFormatter::Pointer buzzwordStringFormatterPointer;
    BuzzwordProvider::Pointer buzzwordProviderPointer;


};


#endif //BUZZWORDS_BUZZWORDCOUNTER_H
