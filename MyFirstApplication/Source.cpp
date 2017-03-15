#include <iostream>
#include <string>  
#include <fstream>

using namespace std;

int main()
{	
	ifstream infile("input.txt");		//открывает файл для чтения
	ofstream outfile("output.txt");		//открывает файл для записи

	if (!infile) {
		cerr << "Error opening input file.\n";
		return -1;
	}

	if (!outfile) {
		cerr << "Error opening output file.\n";
		return -2;
	}

	string word;
	while (infile >> word) {
		outfile << "SM_" << word << '\n';
		cout << "SM_" << word << '\n';
	}
	return 0;
}