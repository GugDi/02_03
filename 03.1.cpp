#include <iostream>
#include <fstream>
#include <string>
class Road {
public:
	double length;
	int width;
};
int main() {
	using namespace std;
	Road road;
	string line;
	ifstream in("data.txt");
	if (in.is_open())
	{
		getline(in, line);
		road.length = stof(line);
		getline(in, line);
		road.width = stoi(line);
	}
	in.close();
	std::cout << "Lenght: " << road.length << endl;
	std::cout << "Width: " << road.width << endl;
};
