#include "Employee.h"

const int SIZE = 3;

//function declaration
void input_data(Employee[]);
void print_info(const Employee[]);


int main()
{
	Employee employees[SIZE];
	
	input_data(employees);
	print_info(employees);
	
	return 0;
}

//function definitons
void input_data(Employee employees[SIZE])
{
	int numOfChildren;
	
	for(int i = 0; i < SIZE; i++)	
	{
		cout << "EMPLOYEE "<< i + 1 << endl;
		
		cout << "Enter Employee" << i+1 <<"'s Name: ";
		getline(cin, employees[i].name);
		
		cout << "Enter Employee SSN: ";
		cin>>employees[i].SSN;
		
		cout << "Enter Employee Income: $";
		cin >> employees[i].income;
		
		cout << "Enter Employee Tax Rate: ";
		cin >> employees[i].taxRate;
		
		cout << "Enter Employee Children Info=> " << endl;
		cout << "\tEnter Number of Children: ";
		cin>>employees[i].numOfChildren;
		
		
		for (int j = 0 ; j < employees[i].numOfChildren; j++)
		{
			cin.ignore();
			
			cout << "\t\tEnter Child" << j + 1 << " Name: ";
			getline(cin, employees[i].children[j].name);
			
			cout << "\t\tEnter Child" << j + 1 << " Age: "; 
			cin >> employees[i].children[j].age;
			
			cout << "\t\tEnter Child" << j + 1 <<" Gender (M or F ): ";
			cin >> employees[i].children[j].gender;
			
			cout << endl;
		}
		
		cin.ignore();
		
		cout << endl;
	}
	
	return;
}

void print_info(const Employee employees[])
{
	for(int i = 0; i < SIZE; i++)	
	{
		cout << endl << "EMPLOYEE "<< i + 1 << endl;
				
		cout << "Employee" << i+1 <<"'s Name: " << employees[i].name << endl;
		
		cout << "Employee "<< i+1 << "'s 'SSN: " << employees[i].SSN << endl;
		
		cout << "Employee " << i+1 << "'s Income: $" << employees[i].income << endl;
		
		cout << "Employee " << i+1 << "'s Tax Rate: " << employees[i].taxRate << endl;
		
		cout << "Employee Children Info=> " << endl;
		
		if (employees[i].numOfChildren > 0)
		{
			for (int j = 0 ; j < employees[i].numOfChildren; j++)
			{
				cout << "\tChild" << i + 1 << " Name is : " << employees[i].children[i].name << endl;
			
				cout << "\tChild" << i + 1 << " Age: " << employees[i].children[i].age << endl;
			
				cout << "\tChild" << i + 1 <<" Gender (M or F ): " << employees[i].children[i].gender << endl;
			}	
		}	
	}
	
	return;
}
