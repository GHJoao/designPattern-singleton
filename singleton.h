#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

#include <iostream>

class Singleton
{

    public:
        static Singleton* getInstance(void);
        ~Singleton();
        std::string getData(void);
        void setData(std::string);

    private:
        Singleton();
        static Singleton* instance;
        std::string data;
};

#endif // SINGLETON_H_INCLUDED
