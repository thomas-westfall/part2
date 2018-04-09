/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 8
Indent
*/

// #include "funcs.h" - No, this should be in main.

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string removeLeadingSpaces(string line){
  string ans = "";
  int counter = 0;
  for(int i = 0; i < line.size(); i++){
    if(line[i] != ' '){
      break;
    }
     counter = counter + 1;
  }
  for (int j = counter; j < line.size(); j++){
    ans = ans + line[j];
  }
  return ans;

  /*Vague commentary, it would have been more efficient
  to mutate in place, or at least build the new string
  in the same for loop (vs multiple loops).

  For example, one could have appended [i+1,...]
  on line 18 to ans, or just returned that, instead
  of breaking.
  This would also eliminate the need for a counter.
  */

}

int countChar(string line, char c){
  int ans = 0;
  //Just stylistically cool (ranged for), not actually necessary.
  for (char t:line){
    //if(line[i] = c){ should be ==
    if(t == c){
      ans = ans + 1;
    }
  }
  return ans;

  //Yep. Basically the simple prototype I would've thought of.
}

string braceTabber(string line, int *braces){

  *braces-=countChar(line,'}');

  line.insert(0,*braces,'\t');

  *braces+=countChar(line,'{');

  return line;
}
