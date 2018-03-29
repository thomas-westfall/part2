/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 8
Indent
*/

/*#include <iostream>
#include <cstdlib>
#include <fstream>   - Additionally unused.

Not in the header stylistically?
*/

using namespace std; //Personally, I wouldn't.

string removeLeadingSpaces(string line);
int countChar(string line, char c);
string braceTabber(string line, int *braces);
