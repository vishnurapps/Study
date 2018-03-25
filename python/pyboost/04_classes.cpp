// 04_classes.cpp
#include <iostream>
#include <boost/python.hpp>

using namespace boost::python;

class Student
{
	public:
		std::string name;
		int age;
		Student(std::string studentName, int studentAge)
		{
			name = studentName;
			age = studentAge;
		}
		void setName (std::string studentName)
		{
			name = studentName;
		}
		void setAge (int studentAge)
		{
			age = studentAge;
		}
		std::string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}

};

BOOST_PYTHON_MODULE(my_module)  // Name here must match the name of the final shared library, i.e. my_module.dll or my_module.so
{
	class_<Student>("Student", init<std::string, int>())
		.def("setName", &Student::setName)
		.def("setAge", &Student::setAge)
		.def("getName", &Student::getName)
		.def("getAge", &Student::getAge);
}
