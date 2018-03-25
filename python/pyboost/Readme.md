# BoostPython
The BoostPython Library binds C++ and Python in a mostly-seamless fashion.

## 01_function.cpp
Simple example with one function
To compile use the below command

```
[vishnu@stampede pyboost]$ g++ -Wall -Wextra -fPIC -shared -I/usr/include/python3.6m/ -lboost_python3 01_function.cpp -o my_module.so
```

To check the output
```
[vishnu@stampede pyboost]$ python
Python 3.6.4 |Anaconda, Inc.| (default, Jan 16 2018, 18:10:19) 
[GCC 7.2.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import my_module
>>> my_module.sayHello()
Hello, Python!
>>> 
```

## 02_function.cpp
Function with argument

Output
```
[vishnu@stampede pyboost]$ python
Python 3.6.4 |Anaconda, Inc.| (default, Jan 16 2018, 18:10:19) 
[GCC 7.2.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import my_module
>>> my_module.sayHello("Vishnu")
Hello Vishnu>>> 

```

## 03_struct.cpp
Structure in C++

Output
```
[vishnu@stampede pyboost]$ python
Python 3.6.4 |Anaconda, Inc.| (default, Jan 16 2018, 18:10:19) 
[GCC 7.2.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import my_module
>>> obj = my_module.Student()
>>> obj.setName("Vishnu")
>>> obj.getName()
'Vishnu'
>>> 

```

## 04_classes.cpp

Output
```
[vishnu@stampede pyboost]$ python
Python 3.6.4 |Anaconda, Inc.| (default, Jan 16 2018, 18:10:19) 
[GCC 7.2.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import my_module
>>> obj = my_module.Student("Vidhya", 24)
>>> obj.getName()
'Vidhya'
>>> obj.getAge()
24
>>> obj.setName("Vishnu")
>>> obj.setAge(27)
>>> obj.getName()
'Vishnu'
>>> obj.getAge()
27
>>>
``` 
