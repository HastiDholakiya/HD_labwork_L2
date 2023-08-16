#include<iostream>
using namespace std;

class cars{
	public:
    
	int car_id;
	char car_company_name[50];
	char car_color[50];
	char car_model[50];
	int car_release_year;

};

int main()
{
	int i;
	
	cars e[4];
	
	for(i=0;i<4;i++)
	{
	cout << "Enter car id : ";
	cin >> e[i].car_id;
	cout << "Enter car company name : ";
	cin >> e[i].car_company_name;
	cout << "Enter car color : ";
	cin >> e[i].car_color;
	cout << "Enter car model : ";
	cin >> e[i].car_model;
	cout << "Enter car release year : ";
	cin >> e[i].car_release_year;
    }
    
	
	for(i=0;i<4;i++)
	{
		cout << "id" << e[i].car_id << endl;
		cout << "company name" << e[i].car_company_name << endl;
		cout << "color" <<e[i].car_color << endl;
		cout << "model" <<e[i].car_model << endl;
		cout << "release year" <<e[i].car_release_year << endl;
		
    }
    
    return 0;
		
}
