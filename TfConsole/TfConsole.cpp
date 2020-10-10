// TfConsole.cpp
//
// A C++ console app that demonstrates using the TensorFlow C API
// and vcpkg integration.
//
// Author: Ian Ormesher
// Date: 10-Oct-2020
//

#include <iostream>

#include <tensorflow/c/c_api.h>

int main()
{
	std::cout << "Hello from TensorFlow C library version " << TF_Version() << std::endl;
}
