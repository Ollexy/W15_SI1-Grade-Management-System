#pragma once
#include <iostream>
#include "DatabaseManager.h"
#include "UserInterfaceDatabaseContext.h"
#include <algorithm>


class Application
{
	DatabaseManager obj1;
	UserInterfaceDatabaseContext obj2;

public:
	void menu();
	void displayMenu();
};
