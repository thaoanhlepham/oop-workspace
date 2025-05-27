#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
public:
    Person(const std::string& name);
    virtual std::string get_name() const;
    virtual ~Person();
};

#endif
