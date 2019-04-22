#include "Bundle.h"

Bundle::Bundle(string name, double discount_rate)
{
    m_name = name;
    m_discount_rate = discount_rate;
}

void Bundle::addItem(Item* item){
    m_items.push_back(item);
    m_price += item->getPrice()*m_discount_rate;
}

Bundle::~Bundle(){

}
