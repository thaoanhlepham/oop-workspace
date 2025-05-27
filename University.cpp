#include "University.h"

University::University(const std::string& name, const std::string& location)
    : name(name), location(location), gradebook(new Gradebook()) {}

University::~University() {
    delete gradebook;
}

void University::addCourse(int id, const std::string& course_name) {
    courses.emplace_back(id, course_name);
}

Gradebook* University::get_gradebook() const {
    return gradebook;
}

std::vector<Course>& University::get_courses() {
    return courses;
}
