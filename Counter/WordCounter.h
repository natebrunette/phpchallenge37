#ifndef BUZZWORDS_WORDCOUNTER_H
#define BUZZWORDS_WORDCOUNTER_H


#include <string>

class WordCounter
{
public:
    typedef std::unique_ptr<WordCounter> Pointer;

    int countWordsInString(std::string& input);
};


#endif //BUZZWORDS_WORDCOUNTER_H
