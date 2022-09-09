#include <iostream>
using namespace std;
class Animal
{
    public:
    //Attributes:
    string species;
    string name;
    int age;
    //Methods:
    void add_animal()
    {
        cout << "ADD NEW ANIMAL TO THE BASE: " << endl;
        cout << "Give species: ";
        cin >> species;
        cout << "Give name: ";
        cin >> name;
        cout << "Give age: ";
        cin >> age;
    }
    void give_sound()
    {
        if (species=="cat") cout << name << " age: " << age << ": Meow!";
        else if (species=="goat") cout << name << " age: " << age << ": Meee!";
        else if (species=="cow") cout << name << " age: " << age << ": Mooo!";
        else cout << "Species unknown!" << endl;
    }
};

int main()
{
    Animal a1;
    a1.add_animal();
    a1.give_sound();


    Animal a2;
    return 0;
}
