# include <iostream>
# include <string>

class PhoneBook {
public:
	PhoneBook();
	virtual ~PhoneBook();

	void	init(void);
	void	add(void);
	void	search(void);
	void	display(void);
private:
	Contact	contacts[8];
	int		amount;
};

class Contact {
public:

private:

};

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

int main()
{
	PhoneBook	pb;
	bool		run;
	std::string	command;

	
}