#pragma once
#include "DatabaseManager.h"
#include <functional>
#include <map>

class UserInterfaceDatabaseContext
{
public:
	void sortIncreasingByGrade(DatabaseManager obj1);
	void sortIncreasingByName();
	void sortDecreasingByGrade();
	void sortDecreasingByName();
};

