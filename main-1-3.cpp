#include <iostream>
#include "University.h"
#include "Student.h"

int main() {
    University uni("Tech University", "Somewhere");

    uni.addCourse(1234, "OOP");
    auto& courses = uni.get_courses();

    Student seb("Seb", 1884670);
    courses[0].addPerson(&seb);

    Gradebook* gradebook = uni.get_gradebook();
    gradebook->addGrade(seb.get_id(), courses[0].get_id(), "assign 1", 90);
    gradebook->addGrade(seb.get_id(), courses[0].get_id(), "assign 2", 85);

    auto grades = gradebook->get_grades();
    for (const auto& g : grades) {
        std::cout << "Student ID:" << g.get_student_id() << ", ";
        std::cout << "Course ID:" << g.get_course_id() << ", ";
        std::cout << "Assignment:" << g.get_assignment() << ", ";
        std::cout << "Value:" << g.get_value() << std::endl;
    }

    return 0;
}
