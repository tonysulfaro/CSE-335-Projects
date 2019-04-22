#ifndef BUNDLE_H
#define BUNDLE_H

#include "Item.h"

#include <vector>

using std::vector;

class Bundle
{
protected:
    vector<Item*> m_items;
    string m_name;
    double m_discount_rate;
    double m_price;
public:
    Bundle(string name, double discount_rate);
    virtual ~Bundle();

    virtual void addItem(Item* item);
};

#endif // BUNDLE_H
