#include<iostream>
using namespace std;
class animal
{
	protected :
		string name, livingPlace, color;
		int power, speed;	
	public:
		animal(){};
	    animal(int speed, string color, int power)
		{
			this -> speed = speed;
			this -> color = color;
			this -> power = power;
		}
		void print()
		{
			cout << "\t" << name << " " << color << " " << speed << " " << power << " " << livingPlace << '\n';
		};
};
class lion : public animal
{
	public:
		lion(int speed, string color, int power ) : animal( speed, color, power)
		{
			this->livingPlace = "Ground";
			this -> name = "Lion";
		}
};

class fish : public animal
{
	public:
		fish(int speed, string color, int power ) : animal( speed, color, power)
		{
			this->livingPlace = "Water";
			this -> name = "Fish";
		}
};
class frog : public animal
{
	public:
		frog(int speed, string color, int power ) : animal( speed, color, power)
		{
			this->livingPlace = "Water";
			this -> name = "Frog";
		}
};
class owl : public animal
{
	public:
		owl(int speed, string color, int power ) : animal( speed, color, power)
		{
			this->livingPlace = "Ground";
			this -> name = "Owl";
		}
};

class zoo
{
	public:
		animal *animals;
		int maxSize;
		int ind;
		zoo(int size)
		{
			this -> maxSize = size;
			animals = new animal[size];
			ind = 0;
		}
		void addAnimal(animal x)
		{
			if(ind == maxSize)
				cout << "Zoo is full !!";
			else
				animals[ind++] = x;
		}
		
		void print()
		{
			for(int i = 0; i < ind; i++)
			{
				animals[i].print();
			}
		}
	
	
};
int main()
{
	lion l1(100, "yellow", 500);
	lion l2(120, "yellowBlack", 430);
	
	fish f1(45, "blue", 10);
	fish f2(40, "green", 15);
	
	owl o1(10, "red", 40);
	owl o2(18, "gray", 65);
	
	frog fr1(5, "black", 12);
	frog fr2(7, "greenBlack", 16);
	
	zoo z(10);
	z.addAnimal(l1);
	z.addAnimal(fr1);
	z.addAnimal(f1);
	z.addAnimal(l2);
	z.addAnimal(o2);
	z.addAnimal(f2);
	z.addAnimal(o1);
	z.addAnimal(fr2);

	cout << "Animals informations in this zoo [ name, color, speed, power, living place ] :\n\n";
	z.print();
}
