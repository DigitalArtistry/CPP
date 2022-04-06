#include <iostream>
#include <string>

class Character {
protected:
	std::string	_name;
	int			_a;
public:
	Character() : _name("Character"), _a(0) {};
	Character(std::string &name, int &a) : _name(name), _a(a) {};
	void sayHello(std::string const & target);
	virtual ~Character();
};

class Warrior : virtual public Character {
protected:
	std::string	_name;
	int			_a;
public:
	Warrior() : _name("Warrior"), _a(1) {};
	Warrior(std::string &name, int &a) : _name(name), _a(a) {};
	virtual void sayHello(std::string const & target);
	virtual ~Warrior();
};

class Wizard : virtual public Character {
protected:
	std::string	_name;
	int			_a;
public:
	Wizard() : _name("Wizard"), _a(2) {};
	virtual void sayHello(std::string const & target);
	virtual ~Wizard();
};

class Both : virtual public Warrior, virtual public Wizard
{
protected:

public:
	Both(void) {
		_name = Warrior::_name;
		_a = Wizard::_a;
	}
	std::string _name;
	int			_a;
	using 		Wizard::sayHello;
	~Both() {};
};

std::ostream	&operator<<(std::ostream &o, const Both &src) {

	// std::string const i = "Magic Dragon";
	o << "Both name is: " << src._name << " Both a is: " << src._a << std::endl;
	return o;
}

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

	Both	test;

	std::cout << "Both test" << std::endl;
	std::cout << test << std::endl;
	test.sayHello("Magic Dragon");
}