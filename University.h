#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"
#include "Gradebook.h"

class University {
private:
    std::string name;
    std::string location;
    Gradebook* gradebook;
    std::vector<Course> courses;
public:
    University(const std::string& name, const std::string& location);
    ~University();

    void addCourse(int id, const std::string& course_name);
    Gradebook* get_gradebook() const;
    std::vector<Course>& get_courses();
};

#endif
