#include "Person.h"
#include "serialization.h"

#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	Person p1 = {"John", 18};
	cout << "p1.name" << p1.name << endl
		<<"p1.age" << p1.age << endl;
	vector<unsigned char> data;
	serializeData(p1, data);

	Person* p2 = reinterpret_cast<Person>(&data[0]);
	assert(p2->name == p1.name);
	assert(p2->age == p1.age);
	return 0;
}
