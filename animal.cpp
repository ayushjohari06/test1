/* Animal Hierarchy:
 Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived classes like Mammal, 
 Bird, and Fish. Each of these derived classes should have specific properties and methods related to their respective categories of
 animals.*/

#include<iostream>
using namespace std;

class Animal
{
    private:
    string kind;
    string place;
    public:
    Animal()
    {
        cout<<"----default animal------";
    }
    Animal(string k,string p)
    {
        kind=k;
        place=p;
    }

    void getplace()
    {
        cout<<"Place : "<<place<<" ";
    }

    void getkind()
    {
        cout<<"Kind : "<<kind<<" ";
    }


};
class Mammal : public Animal
{
    private:
    string name;
    int age;
    public:
    Mammal(string k,string p,string n,int age):Animal(k,p)
    {
        name=n;
        this->age=age;
    }

    void getname()
    {
        cout<<name;
    }

    void setname(string n)
    {
        name=n;
    }
    
    void display()
    {
        getkind();
        getplace();
        cout<<"Name : "<<name<<" "<<"Age is : "<<age<<" ";
        cout<<endl;
    }

};

class Bird:public Animal
{
    private:
    string name;
    int weight;
    public:
    Bird(string k,string p,string n,int weight):Animal(k,p)
    {
        name=n;
        this->weight=weight;
    }

    void getname()
    {
        cout<<name;
    }

    void setname(string n)
    {
        name=n;
    }

    void display()
    {
        getkind();
        getplace();
        cout<<"Name : "<<name<<" "<<"weight is : "<<weight<<"g"<<" ";
        cout<<endl;
    }

};

class Fish:public Animal
{
    private:
    string name;
    int size;
    public:
    Fish(string k,string p,string n,int size):Animal(k,p)
    {
        name=n;
        this->size=size;
    }

    void getname()
    {
        cout<<name;
    }

    void setname(string n)
    {
        name=n;
    }

    void display()
    {
        getkind();
        getplace();
        cout<<"Name : "<<name<<" "<<"size is : "<<size<<"m"<<" ";
        cout<<endl;
    }


};


int main()
{
    Mammal obj1("Mammal","ground","Lion",10);
    Fish obj2("Fish","Water","Shark",5);
    Bird obj3("Bird","Clouds","Crow",50);

    obj1.display();
    obj2.display();
    obj3.display();


}
