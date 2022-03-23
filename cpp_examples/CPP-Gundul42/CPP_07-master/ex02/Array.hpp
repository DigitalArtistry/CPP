/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/14 10:22:35 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <stdexcept>

// This is a template ! No reason to look for a cpp file.
// There isn't any. It is just a blueprint for the compiler
// and filled by the compiler itself, unused stuff will be
// automatically omitted.
template <typename T>
class Array
{
	private:
		unsigned int 	_member;
		T*				_array;

	public:
		// Default constructor
		Array(void): _member(0), _array(NULL){};

		// Constructor taking number of elements as paramter
		Array(unsigned int n): _member(n)
		{
			if (n)
				this->_array = new T[n]();
			else
				this->_array = NULL;
		}

		//Copy constructor
		//Important ! Must be initialized before
		//you can use it with operator=
		//check with valgrind !
		Array(Array const & cpy): _member(0), _array(NULL)
		{	
			*this = cpy;
		}

		//Destructor freeing all used memory
		~Array(void)
			{
				if (this->_array) 
					delete [] _array;
			}

		//assignment operator overload
		//copying one array the the other
		Array &	operator=(Array const & right)
		{
			unsigned int	i = 0;
			
			if (&right == this)
				return (*this);
			if (this->size())
				delete [] this->_array;
			this->_member = right.size();
			if (right.size())
				this->_array = new T[right.size()]();
			else
				this->_array = NULL;
			while (i < right.size())
			{
				this->_array[i] = right._array[i];
				i++;
			}
			return (*this);
		}
		
		//operator overload to read values from the array
		T &	operator[](int & n) 
		{
			if (n < 0 || n > (this->size() - 1))
				throw std::exception();
			else
				return (this->_array[n]);
		}
		
		//operator overload to assign values to the array
		T &	operator[](int const & n) const
		{
			if (n < 0 || n > (this->size() - 1) || !(this->_array))
				throw std::exception();
			else
				return (this->_array[n]);
		}
		
		//returns size of array
		unsigned int const	size(void) const {return (this->_member);};
};

#endif
