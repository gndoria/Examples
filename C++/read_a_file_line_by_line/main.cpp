/**
@author Gideon Ndoria
License: lgpl
@file main.cpp
@brief An example pogramm to demonstrate how to read from a file line by line
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
	/**This is the infile stream.
	If you have to open more than one file, it can be instatiated with a stream
	name that is convinient to you.ie
	ifstream file1("filename");
	ifstream file2("onother_filename");
	would yield the streams named file1 and file2 respectively
	*/
	ifstream file("filename");
	
	//We put the content of the stream in this string for further manipulation.
	string s;

	//Read the contents of the file to the string
	while(getline(file, s)){
		//Output the contents of the string
		cout << s << endl;
	}

	//Close the file stream
	file.close();
	
	return 0;
}
