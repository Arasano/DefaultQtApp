#ifndef ITEM_H
#define ITEM_H

#include <QString>

class Item {
private:
    long long id = -1;
    QString name = "";
    QString description = "";

public:
    Item(long long id);

    Item(long long id, QString name, QString description);

    ~Item();

    long long getId() const;
    QString getName() const;
    void setName(const QString &newName);
    QString getDescription() const;
    void setDescription(const QString &newDescription);
};

long long getId();

QString getName();

void setName(const QString &newName);

QString getDescription();

void setDescription(const QString &newDescription);


#endif // ITEM_H
