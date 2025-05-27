#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <vector>
#include <string>
#include "Course.h"
#include "Gradebook.h"

class University {
private:
    std::string name;
    std::string location;
    Gradebook* gradebook;
    std::vector<Course> courses;
public:
    University(const std::string& name, const std::string& location)
        : name(name), location(location), gradebook(new Gradebook()) {}

    ~University() { delete gradebook; }

    void addCourse(int id, const std::string& course_name) {
        courses.emplace_back(id, course_name);
    }

    Gradebook* get_gradebook() const { return gradebook; }

    std::vector<Course>& get_courses() { return courses; }
};

#endif
