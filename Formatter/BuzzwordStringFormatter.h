#ifndef BUZZWORDS_BUZZWORDSTRINGFORMATTER_H
#define BUZZWORDS_BUZZWORDSTRINGFORMATTER_H


#include <string>

class BuzzwordStringFormatter
{
public:
    typedef std::unique_ptr<BuzzwordStringFormatter> Pointer;

    void stripPunctuationAndLowercase(std::string& input);
};


#endif //BUZZWORDS_BUZZWORDSTRINGFORMATTER_H
