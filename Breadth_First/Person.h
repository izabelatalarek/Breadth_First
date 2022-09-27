#pragma once
#include "Library.h"

class Person
{
private:
	std::string name;
	std::string surname;
	int id;
	std::vector <Person*> friends;

public:
	Person(std::string n, std::string s, int i);
	void addFriend(Person& f);
	int findBestRoute(Person& f,std::vector <bool> path);
	int getId();
	std::vector <Person> findFrends(std::vector <Person> listOfFriends, int distance);
	std::vector < std::vector <Person>> shortestPath(std::vector<std::vector <Person>> path, std::vector<bool> visited, Person finding);

};

