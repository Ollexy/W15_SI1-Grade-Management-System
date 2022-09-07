#include "DatabaseManager.h"

void DatabaseManager::add_entry(student newStudent) {

    std::pair<std::string, int> student1("Rafalek", 5);
    std::pair<std::string, int> student2("Iza", 2);
    std::pair<std::string, int> student3("Kuba", 6);
    schoolDiary.insert(student1);
    schoolDiary.insert(student2);
    schoolDiary.insert(student3);
    schoolDiary.insert({ newStudent.student_name, newStudent.grade});
}

void DatabaseManager::remove_entry(student deletedStudent)
{
    if (schoolDiary.erase(deletedStudent.student_name) == 1)
        std::cout << "Student " << deletedStudent.student_name << " was removed.\n";
    else
        std::cout << "Student " << deletedStudent.student_name << " is not exist.\n";
}

void DatabaseManager::modify_entry(student modifyStudent) {

    schoolDiary[modifyStudent.student_name] = modifyStudent.grade;

}

std::vector<DatabaseManager::student> DatabaseManager::get_entries()
{
    std::vector<student> studentsList(schoolDiary.size());
    std::transform(schoolDiary.begin(), schoolDiary.end(), studentsList.begin(),
        [](auto a)  {return student{ a.first, a.second }; });

    return studentsList;
}

