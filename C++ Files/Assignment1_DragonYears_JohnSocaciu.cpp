/*==========================================================

 Title:       Assignment 1 - Dragon Years
 Course:      CIS 2252
 Author:      <John Socaciu>
 Date:        <8/29/2022>
 Description: This program ....

 ==========================================================
*/

#include <iostream>

using namespace std; 

int main() {
  string name; 
  cin >> name; 
  double age; 
  cin >> age; 
  double newAge; 
  if(age <= 2){
      age *= 10.5; 
  }
  else if (age > 2){
      newAge = age - 2;
      age = newAge * 4 + 21; 
  }
  //write your solution here
  cout << "The dragon named " << name << " is " << age << " years old in wizard years." << endl;             
  return 0;
}

