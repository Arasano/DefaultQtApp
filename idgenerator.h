#ifndef IDGENERATOR_H
#define IDGENERATOR_H

#include <random>
#include <functional>
#include <optional>

#include "item.h"

class IdGenerator
{
private:
    std::random_device *rd;

public:
    IdGenerator();
    ~IdGenerator();

    long long generateId(std::function<std::optional<Item>(long long)> find, const int quantitySymbols);
};

#endif // IDGENERATOR_H
