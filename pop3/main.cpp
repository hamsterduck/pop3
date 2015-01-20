#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char* argv[]){

	string fileName;
	string line;
	string userName;
	ifstream inputFile;

	if (argc < 2){
		cout << "ERROR: missing arguments" << endl;
	}else{
		fileName = argv[2];
		cout << "getting info from " << fileName << endl;
	}

	inputFile.open(fileName);
	if (!inputFile.is_open()){
		cout << "ERROR: unable to open File" << endl;
	}
	else{
		while (getline(inputFile, line)){
			cout << line << endl;
		}
	}

	system("pause");

	return 0;
}