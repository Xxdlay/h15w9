#include <iostream>
#include <string>

using namespace std;

// Task 1
class Student {
protected:
    string _name;
    int _age;

public:
    Student(string name, int age) {
        _name = name;
        _age = age;
    }

    void Print() const {
        cout << "Name: " << _name << ", Age: " << _age << endl;
    }
};

class Aspirant : public Student {
private:
    string _dissertationTopic;

public:
    Aspirant(string name, int age, string topic) : Student(name, age) {
        _dissertationTopic = topic;
    }

    void Print() const {
        cout << "Name: " << _name << ", Age: " << _age << ", Topic: " << _dissertationTopic << endl;
    }
};

// Task 2
class Passport {
protected:
    string _fullName;
    string _passportNumber;
    string _birthDate;

public:
    Passport(string fullName, string passportNumber, string birthDate) {
        _fullName = fullName;
        _passportNumber = passportNumber;
        _birthDate = birthDate;
    }

    void Print() const {
        cout << "Name: " << _fullName << ", Number: " << _passportNumber << ", Birth: " << _birthDate << endl;
    }
};

class ForeignPassport : public Passport {
private:
    string _foreignNumber;
    string _visas;

public:
    ForeignPassport(string fullName, string passportNumber, string birthDate, string foreignNumber, string visas)
        : Passport(fullName, passportNumber, birthDate) {
        _foreignNumber = foreignNumber;
        _visas = visas;
    }

    void Print() const {
        cout << "Name: " << _fullName << ", Number: " << _passportNumber << ", Birth: " << _birthDate
            << ", Foreign Number: " << _foreignNumber << ", Visas: " << _visas << endl;
    }
};

// Task 3
class Vehicle {
public:
    virtual double GetTime(double distance) const = 0;
    virtual double GetCost(double distance, double weight) const = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    double _speed;
    double _costPerKm;

public:
    Car(double speed, double costPerKm) {
        _speed = speed;
        _costPerKm = costPerKm;
    }

    double GetTime(double distance) const override {
        return distance / _speed;
    }

    double GetCost(double distance, double weight) const override {
        return distance * _costPerKm * weight;
    }
};

class Bicycle : public Vehicle {
private:
    double _speed;
    double _costPerKm;

public:
    Bicycle(double speed, double costPerKm) {
        _speed = speed;
        _costPerKm = costPerKm;
    }

    double GetTime(double distance) const override {
        return distance / _speed;
    }

    double GetCost(double distance, double weight) const override {
        return distance * _costPerKm * weight;
    }
};

class Cart : public Vehicle {
private:
    double _speed;
    double _costPerKm;

public:
    Cart(double speed, double costPerKm) {
        _speed = speed;
        _costPerKm = costPerKm;
    }

    double GetTime(double distance) const override {
        return distance / _speed;
    }

    double GetCost(double distance, double weight) const override {
        return distance * _costPerKm * weight;
    }
};

// Task 4
class Pet {
protected:
    string _name;
    string _sound;

public:
    Pet(string name, string sound) {
        _name = name;
        _sound = sound;
    }

    virtual void Sound() const {
        cout << _name << " says: " << _sound << endl;
    }

    virtual ~Pet() {}
};

class Dog : public Pet {
public:
    Dog(string name) : Pet(name, "Woof") {}
};

class Cat : public Pet {
public:
    Cat(string name) : Pet(name, "Meow") {}
};

class Parrot : public Pet {
public:
    Parrot(string name) : Pet(name, "Chirp") {}
};