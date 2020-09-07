# How to calculate factorial numbers using templates.
Templates provide an easy way to apply the same code across data types, allowing programmers to create
generic, reusable code. The best example of this is the STL, with its many containers and associated
algorithms. However, templates can also be used to perform numerical tasks due to their ability to receive
integer numbers, in addition to data types, as formal arguments. In this coding recipe, you will see how
templates can be employed to perform some simple calculations at compilation type.
Template-based computation can be seen as a useful strategy to reduce the runtime overhead of
numeric algorithms. After all, if you’re able to perform some of the calculations at compilation time, less
time will be necessary to perform the complete computation each time you execute the compiled code.
One of the biggest surprises for people who start working with template-based computing is that
calculated values cannot simply be returned as the output of functions. Since functions can return any value
at runtime, a traditional function cannot serve as the basis for compile-time calculations. Instead, you need
a way to store values inside the class as a constant, which can then become readily available to the compiler.
One of the ways to achieve this in C++ is with an enumeration.
