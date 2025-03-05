#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int age;
    string name;
public:
    Person(string n = "Unknown") {
        name = n;
    }
    string GetName() {
        return name;
    }
};

int main() {
    Person person1("ali");
    string n = person1.GetName();
    cout << "Name: " << n << endl;
    return 0;
}