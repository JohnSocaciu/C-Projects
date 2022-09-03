/*==========================================================

 Title:       Assignment 3 - Numerical Reversal
 Course:      CIS 2252
 Author:      <John Socaciu>
 Date:        <9/2/2022>
 Description: Prints the results of given input numbers based on rules. 

 ==========================================================
*/

#include <array> 
#include <iostream> 
#include <algorithm> 

using namespace std; 

int main() {
    
    int i = 0; 
    
    int sizeAllocation; 
    
    cin >> sizeAllocation; 
    
    int numbersInVector[sizeAllocation];
    
    for(int i = 0; i < sizeAllocation; i++){ // gather data
    cin >> numbersInVector[i]; 
    }
    
    for(int n = sizeAllocation - 1; n >= 0; n--){
        cout << numbersInVector[n] << " "; 
    }
    
  return 0;
}







