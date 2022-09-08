#include "UserInterfaceDatabaseContext.h"

void UserInterfaceDatabaseContext::sortIncreasingByGrade(DatabaseManager obj1)
{
	std::unordered_map<std::string, int> exampleMap;

	std::function<bool (DatabaseManager::student, DatabaseManager::student)> sortInGra
		= [](DatabaseManager::student a, DatabaseManager::student b) {return a.grade < b.grade; };

	std::sort(obj1.schoolDiary.begin(), obj1.schoolDiary.end(), sortInGra);
}
