/*
 * project2.cpp
 *
 *  Created on: Sep 8, 2016
 *      Author: Alexandria Robbins
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
string name;
char gender;
int weight, age;

//ask for pets name
cout << "Please enter your pet's name: ";
getline(cin, name);

//ask for gender
cout << "Please enter your pet's gender (M/F): ";
cin >> gender;

//ask for weight
cout << "Please enter your pet's weight: ";
cin >> weight;

//ask for age
cout << "Please enter your pet's age: ";
cin >> age;

//show info
cout << "My pet, " << name << ", is a " << gender << "." << endl;
cout << "My pet weighs " << weight << " lbs and is " << age << " year(s) old." << endl;
return 0;

}






