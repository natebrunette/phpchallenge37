#include <fstream>
#include "BuzzwordProvider.h"

BuzzwordProvider::BuzzwordProvider(std::string resourcePath)
{
    this->buzzwords = nullptr;
    this->resourcePath = resourcePath;
}

BuzzwordProvider::BuzzwordList& BuzzwordProvider::getList()
{
    if (nullptr == this->buzzwords) {
        this->setBuzzwords();
    }

    return *this->buzzwords;
}

void BuzzwordProvider::setBuzzwords()
{
    std::ifstream buzzwordFile(this->resourcePath);

    if (!buzzwordFile.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    std::string line;
    BuzzwordPointer buzzwords(new BuzzwordList());
    while (getline(buzzwordFile, line)) {
        buzzwords->push_back(line);
    }

    this->buzzwords = std::move(buzzwords);
}
