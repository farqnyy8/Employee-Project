#include <iostream>
#include <string>

using namespace std;

struct Child{
	string name;
	int age;
	char gender;
};

struct Employee{
	string name;
	long SSN;
	double income, taxRate;
	Child children[];
	int numOfChildren;
};
