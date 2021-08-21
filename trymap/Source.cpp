#include <iostream>
#include <unordered_map>
using namespace std;

class Employee
{
private:
	int id;
	char name[21];
	float hourlyWage;
	int hoursWorked;
	int hoursOvertime;
public:
	Employee();  // Constructor
				 // Read Functions
	int GetId();
	char *GetName();
	float GetHourlyWage();
	int GetHoursWorked();
	int GetHoursOvertime();

	// "Set" Functions
	void SetId(int in_id);
	void SetName(char *in_name);
	void SetHourlyWage(float in_wage);
	void SetHoursWorked(int in_hoursWorked);
	void SetHoursOvertime(int in_hoursOvertime);
};
// Read Functions
int Employee::GetId() { return id; }
char* Employee::GetName() { return name; }
float Employee::GetHourlyWage() { return hourlyWage; }
int Employee::GetHoursWorked() { return hoursWorked; }
int Employee::GetHoursOvertime() { return hoursOvertime; }

// "Set" Functions
void Employee::SetId(int in_id) { id = in_id; }
void Employee::SetName(char *in_name) { strcpy(name, in_name); }
void Employee::SetHourlyWage(float in_wage) { hourlyWage = in_wage; }
void Employee::SetHoursWorked(int in_hoursWorked) { hoursWorked = in_hoursWorked; }
void Employee::SetHoursOvertime(int in_hoursOvertime) { hoursOvertime = in_hoursOvertime; }

Employee::Employee()//constroctor (i assume the qustion was to create a 0 constructor)
{
	id = 0;
	for (int i = 0; i<21; i++)
	{
		name[i] = 0;
	}
	hourlyWage = 0;
	hoursWorked = 0;
	hoursOvertime = 0;
}

void AddEmployee(unordered_map<int, Employee> &temp_map, int counter)
{
	Employee m;
	m.SetName("brachy");
	temp_map[counter] = m;
}
int main()
{
	unordered_map<int, Employee> map;
//	int n = sizeof(arr) / sizeof(arr[0]);
	int counter = 0;
	for (int i = 0; i < 4; i++)
	{
		AddEmployee(map, counter);
		counter++;
	}
	
	for (auto it = map.begin(); it != map.end(); ++it)
		std::cout << it->first << '\t' <<it->second.GetId() << '\t' <<it->second.GetName()<< endl;

	system("pause");
	return 0;
}