/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 8
Indent
*/

#include <iostream>
#include "funcs.h"
using namespace std;

int main() {

/*
  cout << "Task A test removing indentation: "<<endl;
  string ans = "";
  string line;
  string temp = "";
  while(cin >> line){
    cout<<line<<"\n";
    //temp = temp + line;
    //  if(line == "\n"){
    //ans = ans + removeLeadingSpaces(temp) + "\n";
    //temp = "";
  
 */

//Everything here beyond is added.

  signed int brack = 0;
  int *bracks = &brack;

  string line, output;
  while(getline(std::cin,line)){

    line = removeLeadingSpaces(line);
    output+=braceTabber(line,bracks)+'\n';

  }

  std::cout<<output;


  return 0;
}
