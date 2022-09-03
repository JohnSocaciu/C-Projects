/*==========================================================

 Title:       Assignment 2 - Numerical Representation
 Course:      CIS 2252
 Author:      <John Socaciu>
 Date:        <9/2/2022>
 Description: Given 2 input numbers (on seperate lines), output certain results.

 ==========================================================
*/

#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main() {
    
    int firstInput; 
    int secondInput; 
    
    cin >> firstInput; 
    cin >> secondInput; 

    int range = secondInput - firstInput; 
    
    vector <string> numbers = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine",};  
    
    int lengthArray = sizeof(numbers); 
    
    while(firstInput > secondInput){
            if(firstInput > 9){
                for(int i = 0; i < firstInput; i++){
                numbers.push_back("even");
                numbers.push_back("odd"); 
                }
            }
        cout << numbers[firstInput - 1] << "\n"; 
        firstInput--; 
    }
    
    while(firstInput <= secondInput){
        if(secondInput > 9){
            for(int i = 0; i < secondInput; i++){
            numbers.push_back("even");
            numbers.push_back("odd"); 
            }
        }
            if(firstInput > 9){
                for(int x = 0; x < secondInput; x++){
            numbers.push_back("odd");
            numbers.push_back("even");
            }
        }
    cout << numbers[firstInput - 1] << "\n"; 
    firstInput++; 
    }
  
  return 0;
}














