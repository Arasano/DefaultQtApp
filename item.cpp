#include "item.h"
#include <QString>


Item::Item(long long id): id(id) {}

Item::Item(long long id, QString name, QString description): id(id), name(name), description(description) {};

Item::~Item() = default;


long long Item::getId() const
{
    return id;
}


QString Item::getName() const
{
    return name;
}

void Item::setName(const QString &newName)
{
    name = newName;
}

QString Item::getDescription() const
{
    return description;
}

void Item::setDescription(const QString &newDescription)
{
    description = newDescription;
}
