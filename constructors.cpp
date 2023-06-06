#include <iostream>
using namespace std;
 
class Employee
{
 
public:
    static int count; //returns number of employees
    string eName;
 
    //Constructor
    Employee()
    {
        count++; //increases employee count every time an object is defined
    }
 
    void setName(string name)
    {
        eName = name;
    }
 
    static int getCount()
    {
        return count;
    }
};
 
int Employee::count = 0; //defining the value of count
 
int main()
{
    Employee abdullah1;
    Employee abdullah2;
    Employee abdullah3;
    cout << Employee::getCount() << endl;
}

