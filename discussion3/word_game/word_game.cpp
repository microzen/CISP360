#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main(int argc, char const *argv[])
{
    string name, city, age, college, professon, animal, pet_name;
    cout << "His or her name: ";
    getline(cin, name);
    cout << "The name of a city: ";
    getline(cin, city);
    cout << "His or her age: ";
    getline(cin, age);
    cout << "The name of a college: ";
    getline(cin, college);
    cout << "A profession: ";
    getline(cin, professon);
    cout << "A type of animal: ";
    getline(cin, animal);
    cout << "A pet’s name: ";
    getline(cin, pet_name);

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
    
    return 0;
}