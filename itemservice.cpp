#include <vector>
#include <QString>
#include <QDebug>
#include <optional>

#include "idgenerator.h"
#include "itemservice.h"
#include "item.h"

ItemService::ItemService(IdGenerator* idGenerator) : list(std::vector<Item>{}),idGenerator(idGenerator){}

ItemService::~ItemService()= default;

void ItemService::addItem(QString name, QString description){
    auto findByIdLambda = [this](long long id) -> std::optional<Item> {
        return this->findItemById(id);
    };

    long long newId = idGenerator->generateId(findByIdLambda, 8);
    list.emplace_back(newId, name, description);
    qInfo() << "call addItem method; list: " + getStringList();
}

bool ItemService::deleteItemById(long long id){
    for (int i = 0; i<list.size()-1; i++) {
        if(list[i].getId() == id){
            list.erase(list.begin() + i);
            return true;
        }
    }
    return false;
}

std::optional<Item> ItemService::findItemById(long long id){
    for (Item& item : list) {
        if(item.getId() == id){
             return item;
        }
    }
    return std::nullopt;
}

QString ItemService::getStringList(){

    QString str = "[ ";
    for (Item item : this->list) {
        str = str + "( id: " + QString::number(item.getId()) + " , name: " + item.getName() + " , description: " + item.getDescription() + " ),   ";
    }
    str = str + " ]";
    return str;
}

