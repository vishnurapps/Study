// 03_struct.cpp
#include <iostream>
#include <boost/python.hpp>

using namespace boost::python;

struct Student
{
	std::string name;
	void setName (std::string studentName)
	{
		name = studentName;
	}
	std::string getName()
	{
		return name;
	}

};

BOOST_PYTHON_MODULE(my_module)  // Name here must match the name of the final shared library, i.e. my_module.dll or my_module.so
{
	class_<Student>("Student")
		.def("setName", &Student::setName)
		.def("getName", &Student::getName);
}
