# Calculator Class

The calculator class is a template class that provides basic arithmetic operations on two numbers of any type. It includes the following member functions:
calculator(T num1, T num2)

  The constructor of the calculator class takes two parameters num1 and num2, representing the two numbers to be operated on. The constructor initializes the private member variables n1 and n2 with the given values.
  
T add()

The add() function returns the sum of n1 and n2.
T sub()

The sub() function returns the subtraction of n2 from n1.
T div()

The div() function returns the division of n1 by n2.
T mult()

The mult() function returns the multiplication of n1 and n2.
void showResult()

The showResult() function displays the results of the arithmetic operations. It prints the sum, difference, product, and quotient of the two numbers.

# Main Function

The main() function demonstrates the usage of the calculator class. It creates two instances of the class, intType and floatType, using int and float as the template arguments, respectively. It then calls the showResult() function on each instance to display the arithmetic results.

To use the calculator class with other types, simply instantiate the class with the desired type as the template argument.

Feel free to customize this documentation to fit your specific needs or add any additional information you deem necessary.
