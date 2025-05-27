#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Person.h"

class Course {
private:
    std::string name;
    int id;
    std::vector<Person*> persons;
public:
    Course(int id, const std::string& name);
    void addPerson(Person* p);
    std::vector<Person*> get_persons() const;
    int get_id() const;
    std::string get_name() const;
};

#endif
