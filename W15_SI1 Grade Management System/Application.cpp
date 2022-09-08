#include "Application.h"

void Application::displayMainMenu()
{
    std::cout << "1. Modify database\n";
    std::cout << "2. Load/Store database\n";
    std::cout << "3. Filter database\n";
    std::cout << "4. Set sorting order\n";
    std::cout << "5. Visualize database\n";
    std::cout << "6. Exit\n\n>> ";
}

void Application::mainMenu()
{


    int choice;

    do {
        displayMainMenu();

        std::cin >> choice;
        std::cout << "\n";

        if (choice == 1) {
            modifyDatabase();
        }
        else if (choice == 2) {
            obj1.load();
        }
        else if (choice == 3) {
          
        }
        else if (choice == 4) {
           
        }
        else if (choice == 5) {
            obj1.visualize();
        }

    } while (choice != 6);

}

void Application::modifyDatabase()
{


    int choice;

    do {
        displayModifyDatabase();
        DatabaseManager::student newStudent;

        std::cin >> choice;
        std::cout << "\n";

        if (choice == 1) {
            
            std::cout << "Enter name: ";
            std::cin.clear();
            std::cin.ignore();
            std::getline(std::cin,newStudent.student_name);

            std::cout << "Enter grade: ";
            std::cin >> newStudent.grade;

            obj1.add_entry(newStudent);
        }
        else if (choice == 2) {
            std::cout << "Enter student's name to remove: ";
            std::cin.clear();
            std::cin.ignore();
            std::getline(std::cin, newStudent.student_name);

            obj1.remove_entry(newStudent);
            break;
        }
        else if (choice == 3) {
            std::cout << "Enter name: ";
            std::cin.clear();
            std::cin.ignore();
            std::getline(std::cin, newStudent.student_name);

            auto search = obj1.schoolDiary.find(newStudent.student_name);

            if (search != obj1.schoolDiary.end()) {
                std::cout << "Enter new grade: ";
                std::cin >> newStudent.grade;

                obj1.modify_entry(newStudent);

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
        else if (choice == 5) {
            obj1.visualize();
        }

    } while (choice != 6);

}

void Application::displayModifyDatabase()
{
    std::cout << "1. Add student \n";
    std::cout << "2. Remove student \n";
    std::cout << "3. Modify student \n";
    std::cout << "4. Get students \n";
    std::cout << "5. Visualize\n";
    std::cout << "6. Back \n\n>> ";

    //Main Menu: modifyDatabase, load/store dataBase, filterDatabase, setSortingOrder, visualizeDatabase, EXIT
}

