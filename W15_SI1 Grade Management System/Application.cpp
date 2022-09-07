#include "Application.h"

void Application::menu()
{


    int choice;

    do {
        displayMenu();

        std::cin >> choice;
        if (choice == 1) {
            std::cout << "Enter name: ";
            std::string newStudent;
            std::cin >> newStudent;

            std::cout << "Enter grade: ";
            int newGrade;
            std::cin >> newGrade;

            obj1.add_entry(newStudent, newGrade);
        }
        else if (choice == 2) {
            std::string nameToRemove;
            std::cout << "Enter student's name to remove: ";
            std::cin >> nameToRemove;
            obj1.remove_entry(nameToRemove);
            break;
        }
        else if (choice == 3) {
            std::cout << "Enter name: ";
            std::string newStudent;
            std::cin >> newStudent;

            auto search = obj1.schoolDiary.find(newStudent);

            if (search != obj1.end(obj1.schoolDiary)) {
                std::cout << "Enter new grade: ";
                int newGrade;
                std::cin >> newGrade;

                obj1.modify_entry(newStudent, newGrade);

            }
            else {
                std::cout << "This student is unevailable ;) Try later...\n";
            }


            break;
        }
        else if (choice == 4) {
            /* auto it = begin(schoolDiary);
             for (it; it != end(schoolDiary); it++) {
                 std::cout << "\t Name: " << it->first << "\t Grade: " << it->second << std::endl;
             }*/

            auto a = obj1.get_entries();
            std::cout << "jaja";

            break;
        }

    } while (choice != 5);

}

void Application::displayMenu()
{
    std::cout << "1. Add student \n";
    std::cout << "2. Remove student \n";
    std::cout << "3. Modify student \n";
    std::cout << "4. Get students \n";
    std::cout << "5. Exit \n\n";
}
