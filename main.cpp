// =================================================================
//
// File: main.cpp
// Author:
// Date:
//
// =================================================================
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream archivoLeer;
	string texto;
    	archivoLeer.open("input1.txt");
    	getline(archivoLeer,texto)
	archivoLeer.close();
	return 0;
}
