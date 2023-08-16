#include<iostream>
using namespace std;

class employee{
	public:
    
	int emp_id;
	char emp_name[50];
	char emp_role[50];
	int emp_age;
	int emp_salary;
	int emp_experience;
	char emp_city[50];
	char emp_company_name[50];  
};

int main()
{
	int i;
	
	employee e[5];
	
	for(i=0;i<5;i++)
	{
	cout << "Enter employee id : ";
	cin >> e[i].emp_id;
	cout << "Enter employee name : ";
	cin >> e[i].emp_name;
	cout << "Enter employee role : ";
	cin >> e[i].emp_role;
	cout << "Enter employee age : ";
	cin >> e[i].emp_age;
	cout << "Enter employee salary : ";
	cin >> e[i].emp_salary;
	cout << "Enter employee experience : ";
	cin >> e[i].emp_experience;
	cout << "Enter employee city : ";
	cin >> e[i].emp_city;
	cout << "Enter employee company_name : ";
	cin >> e[i].emp_company_name;
	}
	
	
	for(i=0;i<5;i++)
	{
		cout << "id" << e[i].emp_id << endl;
		cout << "name" << e[i].emp_name << endl;
		cout << "role" <<e[i].emp_role << endl;
		cout << "age" <<e[i].emp_age << endl;
		cout << "salary" <<e[i].emp_salary << endl;
		cout << "experience" <<e[i].emp_experience << endl;
		cout << "city" <<e[i].emp_city << endl;
		cout << "company_name" <<e[i].emp_company_name << endl;
    }
    
    return 0;
		
}
