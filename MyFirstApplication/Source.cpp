#include <iostream>
#include <string>  
#include <fstream>

using namespace std;

int main()
{	
	ifstream infile("input.txt");
	ofstream outfile("output.txt");

	if (!infile) {
		cerr << "Error opening input file.\n";
		return -1;
	}

	if (!outfile) {
		cerr << "Error opening output file.\n";
		return -2;
	}

	string word;
	while (infile >> word)
		outfile << "SM_" << word << endl;
	return 0;
}