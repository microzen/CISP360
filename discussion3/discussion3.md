# Discussion 3

# **Pizza Pi**

[Link to Pizza Pi](./pizza_pi/pizza_pi.cpp)

Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. The program should perform the following steps:

- Ask the user for the diameter of the pizza in inches.
- Calculate the number of slices that may be taken from a pizza of that size.
- Display a message telling the number of slices.

To calculate the number of slices that may be taken from the pizza, you must know the following facts:

- Each slice should have an area of 14.125 inches.
- To calculate the number of slices, simply divide the area of the pizza by 14.125.
- The area of the pizza is calculated with this formula: Area = "pi r squared" where pi is approximately 3.14159 and r is the radius (half the the diameter).

```cpp
#include <cmath>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double diameter = 0;
    const double size = 14.125;
    int slicse;

    cout << "Input the diameter of pizza in inches: ";
    cin >> diameter;
    slicse = ((pow((diameter / 2), 2) * M_PI) / size);
    cout << "The pizza can be cut into " << slicse << " slices" << endl;
    return 0;

		// Input the diameter of pizza in inches: 10
    // The pizza can be cut into 5 slices%
}
```

# **Word Game**

[Link to Word Game](./word_game/word_game.cpp)

Write a program that plays a word game with the user. The program shouldask the user to enter the following:

- His or her name
- The name of a city
- His or her age
- The name of a college
- A profession
- A type of animal
- A pet’s name

```cpp
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main(int argc, char const *argv[])
{
    string name, city, age, college, professon, animal, pet_name;
    cout << "His or her name: ";
    getline(cin,name);
    cout << "The name of a city: ";
    getline(cin,city);
    cout << "His or her age: ";
    getline(cin,age);
    cout << "The name of a college: ";
    getline(cin,college);
    cout << "A profession: ";
    getline(cin,professon);
    cout << "A type of animal: ";
    getline(cin,animal);
    cout << "A pet’s name: ";
    getline(cin,pet_name);

		cout << "There once was a person named " << name << " who lived in " << city << ".";
    cout << " At the age of " << age << ", NAME went o college at " << college << ".";
    cout << " NAME graduated and went to work as a " << professon << ".";
    cout << " Then, NAME adopted a(n) " << animal << " named " << pet_name << ".";
    cout << " They both lived happily ever after!";

		// His or her name: Lala
    // The name of a city: Sac
    // His or her age: 18
    // The name of a college: CRC
    // A profession: CS
    // A type of animal: Dog
    // A pet’s name: Lsy
    // There once was a person named Lala who lived in Sac. 
		// At the age of 18, NAME went o college at CRC. 
		// NAME graduated and went to work as a CS. 
		// Then, NAME adopted a(n) Dog named Lsy. 
		// They both lived happily ever after!%
}
```