#include "BuzzwordStringFormatter.h"

void BuzzwordStringFormatter::stripPunctuationAndLowercase(std::string& input)
{
    std::replace_if(
            input.begin(),
            input.end(),
            [](char& c) {
                if (std::ispunct(c)) {
                    // keep '-'
                    return '-' != c;
                }

                // if not punctuation, make lowercase first
                c = (char) std::tolower(c);

                return false;
            },
            ' '
    );
}

