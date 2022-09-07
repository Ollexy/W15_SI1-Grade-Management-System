#pragma once
#include <string>
#include <unordered_map>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>



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
    void visualize();

    std::vector <student> get_entries();

    void save();
    void load();
    //friend std::ostream& operator<<(std::ostream&, const databaseManager&);
    //friend std::ostream& operator>>(std::ostream&, const databaseManager&);
};


