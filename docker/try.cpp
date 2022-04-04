#include <iostream>
#include <string>

class Character {
public:
	virtual void sayHello(std::string const & target);
	virtual ~Character();
};

class Warrior : virtual public Character {
public:
	virtual void sayHello(std::string const & target);
	virtual ~Warrior();
};

class Wizard : virtual public Character {
public:
	virtual void sayHello(std::string const & target);
	virtual ~Wizard();
};

void		Character::sayHello(std::string const & target) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void		Warrior::sayHello(std::string const & target) {
	std::cout << "Fuck off " << target << "!" << std::endl;
}

void		Wizard::sayHello(std::string const & target) {
	std::cout << "Welcome young " << target << std::endl;
}

Character::~Character() {}
Warrior::~Warrior() {}
Wizard::~Wizard() {}

int main() {

	//This is OK obviously, Warrior IS a Warrior
	Warrior*	a = new Warrior();

	//This is OK too, Warrior IS a Character
	Character*	b = new Warrior();

	a->sayHello("students"); // Hello students!

	b->sayHello("students"); // Fuck off students!

	Character*	c = new Wizard();

	*c = *b;
	delete b;

	c->sayHello("saul");

	delete a;
	delete c;
}