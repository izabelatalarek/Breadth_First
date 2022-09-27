#pragma once
#include "Person.h"
#include "Library.h"


int findBestRoute(std::vector <Person> friends, Person& osoba1, Person& osoba2);
void makeFriends(Person& p1, Person& p2);
std::vector<std::vector<Person>> shortestPath(std::vector <Person> friends, Person& p1, Person& p2);