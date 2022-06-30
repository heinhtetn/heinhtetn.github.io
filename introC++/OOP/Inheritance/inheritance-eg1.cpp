#include <iostream>
using namespace std;

class Animal
{

protected:
    string name;
    int leg;

public:
    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }

    void setLeg(int leg)
    {
        this->leg = leg;
    }

    int getLeg()
    {
        return this->leg;
    }

    void eat()
    {
        cout << "\nI can eat!";
    }

    void sleep()
    {
        cout << "\nI can sleep!";
    }
};

class Bird : public Animal
{
    // protected:
    //     string name;
    //     int leg;

private:
    int wings;

public:
    int getWings()
    {
        return this->wings;
    }
    void initData(string name, int leg, int wings)
    {
        this->wings = wings;
        this->name = name;
        this->leg = leg;
    }

    void fly()
    {
        cout << "\nI can fly!";
    }
};

class Elephant : public Animal
{
private:
    int tails;

public:
    void setTails(int tails)
    {
        this->tails = tails;
    }
    void swim()
    {
        cout << "\nI can swim!";
    }

    void showInfo()
    {
        cout << "\n----- Elephant Info -----\n";
        cout << "Name: " << getName();
        cout << "\nNo of legs: " << getLeg();
        cout << "\nNo of tails: " << tails;
    }
};

int main()
{
    Bird bird = Bird();
    bird.initData("Parrot", 2, 2);
    cout << "\n----- Bird Information -----\n";
    cout << "Name: " << bird.getName();
    cout << "\nLeg: " << bird.getLeg();
    cout << "\nWings: " << bird.getWings();

    bird.sleep();
    bird.eat();
    bird.fly();

    Elephant elephant = Elephant();
    elephant.setName("Thandar");
    elephant.setLeg(4);
    elephant.setTails(1);

    elephant.showInfo();
    elephant.eat();
    elephant.sleep();
    elephant.swim();
    return 0;
}