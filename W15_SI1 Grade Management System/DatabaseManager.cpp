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

void DatabaseManager::visualize()
{
    auto it = begin(schoolDiary);
             for (it; it != end(schoolDiary); it++) {
                 std::cout << "\t Name: " << std::setw(15) << std::left << it->first << "\t Grade: " << it->second << std::endl;
             }
}

std::vector<DatabaseManager::student> DatabaseManager::get_entries()
{
    std::vector<student> studentsList(schoolDiary.size());
    std::transform(schoolDiary.begin(), schoolDiary.end(), studentsList.begin(),
        [](auto a)  {return student{ a.first, a.second }; });

    return studentsList;
}

void DatabaseManager::save()
{

}

void DatabaseManager::load()
{
    std::vector < std::string > student;
    std::string line, word;
    std::fstream file("Students.csv", std::ios::in);
    if (file.is_open()) {
        while (getline(file, line)) {
            student.clear();

            std::stringstream str(line);

            while (std::getline(str, word, ','))
                student.push_back(word);
            
        }
        std::stoi(student[1]);
        std::pair<student, student> paraStudentow;
        schoolDiary.insert(student);
        file.close();

    }
    else
        std::cout << "Could not open the file\n";

}

