#include "singleton.h"

Singleton::Singleton()
{this->data = "";}

Singleton::~Singleton()
{}

Singleton* Singleton::instance = 0;

void Singleton::setData(std::string newData = "")
{
    this->data = newData;
}

std::string Singleton::getData(void)
{
    return this->data;
}

Singleton* Singleton::getInstance()
{
    if(instance == 0)
        instance = new Singleton();
    return instance;
}
