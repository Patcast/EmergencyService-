#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>


class Observer
{
public:
    Observer();
    virtual void update(std::string data) = 0;
};

#endif // OBSERVER_H
