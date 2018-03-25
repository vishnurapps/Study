// 01_function.cpp
#include <iostream>
#include <boost/python.hpp>

void sayHello()
{
	std::cout << "Hello, Python!\n";
}

BOOST_PYTHON_MODULE(my_module)  // Name here must match the name of the final shared library, i.e. my_module.dll or my_module.so
{
	boost::python::def("sayHello", &sayHello);
}
