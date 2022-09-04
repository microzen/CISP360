# Chapter 1
---
1. An error in a program that involves a violation of language rules will be detected at **Compile** time
2. Division by zero when the program is executing is an example of a **Run-Time** error.
3. The purpose of testing a program with different combinations of data is to expose run-time and **Logical** errors.
4. Replace the underlines with the words in parentheses that follow: The **Programmer** solves the **Problems** of a **User** by expressing an **Algorithm** in a **Programming Language** to make a **Program** that can run on a **Computer**. 

# Chapter 2
---
1.  The text of a comment **can be anything the programmer wants to write**.
2. A preprocessor directive starts with a character, `#`. 
3. Preprocessor directives are carried out **just before a program is processed by the compiler**.
4. Every C++ program must contain a `main()` function.
5. Suppose your _name_ was Alan Turing. Write a *statement* that would print your last name, followed by a comma, followed by your first name. Do not print anything else (that includes blanks). You may try as many ways as you can.
``` c++
std::cout<<"Wu,Yezhi"
```
6. The word in the brackets of an include directive specifies (`#include`) **a file containing code that is copied into the program at that point**.
7. A ``std`` will not be recognized if `iostream` is not included in the program?
8. Write the include directive needed to allow use of the various I/O operators such as `_cout_` and `_cin_`.
```c++
#include <iostream>
using namespace std;
```
9. Write a declaration for an integer variable **area** and a variable **price** that can hold numbers with decimal places.
```c++
int main(){
	double area,price;	
}
```
10. Rearrange the following code so that it forms a correct program that prints out the letter Q:

```c++
#include <iostream>
using namespace std;
// A SCRAMBLED program
int main()
{
	cout << "Q";
	return 0;
}
```
11. **Ocean Levels**
> Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a  program that displays

```c++
#include <iostream>
using namespace std;
int main(){
	const float rise = 1.5; // The number of millimeters higher than the current level that the ocean’s level will be in 5 years, 
	cout << "The ocean’s level will be " << rise * 5 << "in 5 years"; 
	// The number of millimeters higher than the current level that the ocean’s level will be in 7 years, 
	cout << "The ocean’s level will be " << rise * 7 << "in 7 years"; 
	// The number of millimeters higher than the current level that the ocean’s level will be in 10 years, 
	cout << "The ocean’s level will be " << rise * 10 << "in 10 years";
}
```
12. **Land Calculation**  
  
One acre of land is equivalent to 43,560 square feet. Write a program  that calculates the number of acres in a tract of land with 389,767 square feet.
```C++
#include <iostream>
using namespace std;
int main(){
	const double acre = 43560;
	double tractOfLand = 389767;
	double result  = acre/tractOfLand;
	cout << "This land has " << result << "acres."
}
```

13. **Diamond Pattern**  
  
> Write a program that displays the following pattern:  
  
```c++
#include <iostream>
using namespace std;
int main(){
	// *
	// ***  
	// *****  
	// *******  
	// *****  
	// ***  
	// *
	cout << "*" << endl;
	cout << "***" << endl;
	cout << "*****" << endl;
	cout << "*******" << endl;
	cout << "*****" << endl;
	cout << "***" << endl;
	cout << "*" << endl;
}
```
