#include "idgenerator.h"
#include <random>
#include <optional>

#include "item.h"

IdGenerator::IdGenerator(): rd(new std::random_device()){}

IdGenerator::~IdGenerator()
{
    delete rd;
}

long long IdGenerator::generateId(std::function<std::optional<Item>(long long)> find, const int quantitySymbols)
{
    while(true)
    {
        long long randomValue = (*rd)() % 10000000;
        if (!find(randomValue).has_value())
        {
            return randomValue;
        }
    }
}
