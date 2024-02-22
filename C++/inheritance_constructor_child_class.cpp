#include <iostream>

class Person {
protected:
  std::string name;
  int age;
public:
  Person(const std::string& name, int age) : name(name), age(age) {}
};

class Employee : public Person {
private:
  int employee_id;

public:
  Employee(const std::string& name, int age, int employee_id)
      : Person(name, age), employee_id(employee_id) {}

  void print_info() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Employee ID: " << employee_id << std::endl;
  }
};

int main() {
  Employee emp("John Doe", 30, 12345);
  emp.print_info();

  return 0;
}
