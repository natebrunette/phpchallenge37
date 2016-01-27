#ifndef BUZZWORDS_BUZZWORDPROVIDER_H
#define BUZZWORDS_BUZZWORDPROVIDER_H


#include <vector>
#include <string>

class BuzzwordProvider
{
public:
    typedef std::unique_ptr<BuzzwordProvider> Pointer;
    typedef std::vector<std::string> BuzzwordList;
    explicit BuzzwordProvider(std::string resourcePath);
    BuzzwordList& getList();

private:
    typedef std::unique_ptr<BuzzwordList> BuzzwordPointer;
    BuzzwordPointer buzzwords;
    std::string resourcePath;
    void setBuzzwords();
};


#endif //BUZZWORDS_BUZZWORDPROVIDER_H
