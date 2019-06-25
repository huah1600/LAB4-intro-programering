FUNCTIONS: SCOPE & FLEXIBILITY
Function Overload!
What if you want a function to accept an argument that can be either an int OR a double? Or what if you want some function parameters to be optional? C++ has a trick up its sleeve just for such situations.

In a process known as function overloading, you can give multiple C++ functions the same name. Just make sure at least one of these conditions is true:

Each has different type parameters.
Each has a different number of parameters.
Overloading enables you to change the way a function behaves depending on what is passed in as an argument:


int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);
