#include<iostream>
#include<fstream>
class Road {
public:
	double length;
	int width;
};

int main() {
	using namespace std;
	Road road;
	ifstream fIn;
	fIn.open("E:\\институт\\Dolg\\Priklodnoe Programiovanie\\02\\03\\length.txt");
	fIn >> road.length;
	fIn.close();
	fIn.open("E:\\институт\\Dolg\\Priklodnoe Programiovanie\\02\\03\\width.txt");
	fIn >> road.width;
	fIn.close();
	cout << "Lenght: " << road.length << endl;
	cout << "Width: " << road.width << endl;
};
