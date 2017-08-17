/**
@author Gideon Ndoria
License: lgpl
@file main.cpp
@brief An example pogramm to demonstrate how to write to a file
*/

#include <iostream>
#include <fstream>//Required to read/write to files
#include <string>

/**This statement saves you from having to write std::string, std::cout and
std::endl*/
using namespace std;

/**int argc: count of command line arguments
char **args: (can also be written as char *args[]) is an array containing
the commandline arguments with args[0] being the programm name.
*/
int main(int argc, char **args){
	string text = "Some text to write to a file!";
	ofstream file("filename");
	if(!file){
		cerr << "Unable to create the file" << endl;
		return 1;
	}
	else{
		file << text << endl;
	}
	file.close();
	return 0;
}
