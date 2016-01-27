#include <iterator>
#include <sstream>
#include "WordCounter.h"

int WordCounter::countWordsInString(std::string& input)
{
    std::stringstream stream(input);

    return (int) std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>());
}
