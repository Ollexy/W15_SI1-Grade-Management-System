#pragma once
#include <string>
#include <unordered_map>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>



class DatabaseManager
{
public:
    DatabaseManager() = default;
    ~DatabaseManager() = default;

    struct student {
        std::string student_name;
        int grade;
    };


    std::unordered_map <std::string, int> schoolDiary;

    void add_entry(student);
    void remove_entry(student);
    void modify_entry(student);

    std::vector <student> get_entries();

    //friend std::ostream& operator<<(std::ostream&, const databaseManager&);
    //friend std::ostream& operator>>(std::ostream&, const databaseManager&);
};


