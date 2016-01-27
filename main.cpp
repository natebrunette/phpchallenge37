#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Provider/BuzzwordProvider.h"
#include "Formatter/BuzzwordStringFormatter.h"
#include "Counter/BuzzwordCounter.h"
#include "Counter/WordCounter.h"
#include "Calculator/BuzzwordPercentCalculator.h"

int main(int argc, char *argv[])
{
    if (2 != argc) {
        std::cout << "Program needs 1 argument" << std::endl;

        return 1;
    }

    // get input and add space to end
    std::unique_ptr<std::string> originalInput(new std::string(argv[1]));
    std::unique_ptr<std::string> input(new std::string(*originalInput + " "));

    auto buzzwordsList = (std::string) getcwd(NULL, 0) + "/resources/buzzwords.txt";

    BuzzwordStringFormatter::Pointer buzzwordStringFormatterPointer(new BuzzwordStringFormatter());
    BuzzwordProvider::Pointer buzzwordProviderPointer(new BuzzwordProvider(buzzwordsList));

    BuzzwordCounter::Pointer buzzwordCounterPointer(new BuzzwordCounter(
            std::move(buzzwordStringFormatterPointer),
            std::move(buzzwordProviderPointer)
    ));
    WordCounter::Pointer wordCounterPointer(new WordCounter());

    BuzzwordPercentCalculator buzzwordPercentCalculator(
            std::move(buzzwordCounterPointer),
            std::move(wordCounterPointer)
    );

    std::cout << buzzwordPercentCalculator.calculatePercentBuzzwordy(*input) << '%' << std::endl;

    return 0;
}
