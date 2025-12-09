// 4️⃣ Polymorphism
#include<iostream>
using namespace std;

class Animal
{
    public:
    void sound()
    {
        cout<<"Animals Makes a sound"<<endl;

    }

};

class Dog : public Animal
{
    public:
    void sound()
    {
        cout<<"Dogs Barks"<<endl;
        
    }

};


int main()
{
    Dog d1;
    d1.sound();
    d1.Animal::sound();

}