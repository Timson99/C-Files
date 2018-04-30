#ifndef PERSON_H_
#define PERSON_H_

using namespace std;

class Person {
    
private:
    string name;
    int age;
public:
    Person(): name("undefined"), age(0) {};
    Person(string name): name(name), age(0) {};
    Person(string name, int age): name(name), age(age) {};
    string toString();
    
};

#endif