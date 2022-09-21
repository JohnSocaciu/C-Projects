/*==========================================================

 Title:     Assignment 4 - C++ Care Unit
 Course:  	CIS 2252
 Author:  	John Socaciu
 Date:    	09/17/2022
 Description: Calculate the BMI using two inputs. 

 ==========================================================
*/

#include <iostream>
#include <math.h>
using namespace std;


class Car{
public: 
string name;
int price; 
string car; 
    Car(string personsName, int pricing, string carName){
        name = personsName; 
        price = pricing;
        car = carName; 
    }
};

// Write functions here

double BMIcalculator(double weight){
    double bmiKilograms = weight / 3.24; 
    return bmiKilograms; 
}

double conversionMeters(double height){
    double heightMeters = height / 3.281;
    return heightMeters; 
}

double BMIcalculator(double weightKilograms, double heightMeters){
    double newBmi = weightKilograms / (heightMeters * heightMeters); 
    return newBmi; 
}

void swap(double& firstWeight, double& secondWeight){
    double firstStorage = firstWeight; 
    double secondStorage = secondWeight;
    firstWeight = secondStorage;
    secondWeight = firstStorage; 
}

int main() {
    //DO NOT MODIFY MAIN()!!!
    
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}
