#ifndef ITEMSERVICE_H
#define ITEMSERVICE_H

#include <vector>
#include <QString>
#include "idgenerator.h"
#include "item.h"

class ItemService{
private:
    std::vector<Item> list;
    IdGenerator* idGenerator;

public:
    ItemService(IdGenerator* idGenerator);
    ~ItemService();

    void addItem(QString name, QString description);
    bool deleteItemById(long long id);
    std::optional<Item> findItemById(long long id);
    QString getStringList();
};


#endif // ITEMSERVICE_H
