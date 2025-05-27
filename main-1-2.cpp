#include <iostream>
#include "Gradebook.h"

int main() {
    Gradebook gradebook;
    gradebook.addGrade(1884670, 1234, "assign 1", 90);

    auto grades = gradebook.get_grades();
    for (const auto& g : grades) {
        std::cout << "Student ID:" << g.get_student_id() << std::endl;
        std::cout << "Course ID:" << g.get_course_id() << std::endl;
        std::cout << "Assignment:" << g.get_assignment() << std::endl;
        std::cout << "Value:" << g.get_value() << std::endl;
    }

    return 0;
}
