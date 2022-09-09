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
	vector <string> v;
	string k;
	ifstream archivoLeer;
	string texto;
    	archivoLeer.open("input1.txt");
    	getline(archivoLeer,texto);
	k=texto;
	while(getline(archivoLeer,texto);){
		v.push_back(texto);	
	}
	archivoLeer.close();
	return 0;
}
