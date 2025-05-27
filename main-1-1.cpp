#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

int main() {
    Student seb("Seb", 1884670);
    Instructor drV("Dr.V");

    Course oop(1234, "OOP");
    oop.addPerson(&seb);
    oop.addPerson(&drV);

    auto persons = oop.get_persons();
    for (auto p : persons) {
        Student* s = dynamic_cast<Student*>(p);
        if (s) {
            std::cout << "Name of Student:" << s->get_name() << std::endl;
            std::cout << "Id of Student:" << s->get_id() << std::endl;
        } else {
            std::cout << "Name of Instructor:" << p->get_name() << std::endl;
        }
    }

    return 0;
}
#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

int main() {
    Student seb("Seb", 1884670);
    Instructor drV("Dr.V");

    Course oop(1234, "OOP");
    oop.addPerson(&seb);
    oop.addPerson(&drV);

    auto persons = oop.get_persons();
    for (auto p : persons) {
        Student* s = dynamic_cast<Student*>(p);
        if (s) {
            std::cout << "Name of Student:" << s->get_name() << std::endl;
            std::cout << "Id of Student:" << s->get_id() << std::endl;
        } else {
            std::cout << "Name of Instructor:" << p->get_name() << std::endl;
        }
    }

    return 0;
}
