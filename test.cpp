#include <string>
#include <iostream>

using namespace std;
class Person {
public:
    // Constructor
    Person(){};
    Person(std::string name, int age, std::string occupation) : name_(name), age_(age), occupation_(occupation) {}

    // Getter functions
    std::string getName() const { return name_; }
    int getAge() const { return age_; }
    std::string getOccupation() const { return occupation_; }

    // Setter functions
    void setName(std::string name) { name_ = name; }
    void setAge(int age) { age_ = age; }
    void setOccupation(std::string occupation) { occupation_ = occupation; }

private:
    std::string name_;
    int age_;
    std::string occupation_;
};

int main()
{
    Person anas;
    std::cout << anas.getOccupation() << endl;
    std::cout << anas.getAge() << endl;
}
