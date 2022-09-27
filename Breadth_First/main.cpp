#include "Library.h"
#include "Person.h"
#include "Algorithms.h"

int main()
{
	int id = 0;
	Person osoba1("zaneta","kowal",id++);
	Person osoba2("zaneta2", "kowal2", id++);
	Person osoba3("zaneta3", "kowal3", id++);
	Person osoba4("zaneta4", "kowal4", id++);
	Person osoba5("zaneta5", "kowal5", id++);
	Person osoba6("zaneta6", "kowal6", id++);
	Person osoba7("zaneta7", "kowal7", id++);
	Person osoba8("zaneta8", "kowal8", id++);

	makeFriends(osoba1, osoba2);
	makeFriends(osoba2, osoba4);
	makeFriends(osoba2, osoba3);
	makeFriends(osoba4, osoba3);
	makeFriends(osoba3, osoba5);
	makeFriends(osoba5, osoba7);
	makeFriends(osoba5, osoba8);
	makeFriends(osoba2, osoba7);

	std::vector <Person> society;
	society.push_back(osoba1);
	society.push_back(osoba2);
	society.push_back(osoba3);
	society.push_back(osoba4);
	society.push_back(osoba5);
	society.push_back(osoba6);
	society.push_back(osoba7);
	society.push_back(osoba8);
	
	std::cout << "Distance: "<< findBestRoute(society, osoba1, osoba4);

	std::vector <Person> lista;
	lista = osoba8.findFrends(lista, 3);
	std::cout << "\nFriends of: " << osoba8.getId()+1 << std::endl;
	for (auto a : lista) {
		std::cout << a.getId()+1<<std::endl;
	}

	std::vector<std::vector<Person>> temp;
	temp = shortestPath(society, osoba1, osoba5);
	std::cout << "\nConnections to: \n";
	for (auto b : temp) {
		std::cout << "[ ";
		for (auto c : b) {
			std::cout << c.getId() << ", ";
		}
		std::cout << "]\n";
	}
}