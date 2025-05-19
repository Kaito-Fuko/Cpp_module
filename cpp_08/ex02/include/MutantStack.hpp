#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack();
		~MutantStack();
		
		typedef typename MutantStack<T>::container_type::iterator iterator;
        typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator            begin(void);
        const_iterator      begin(void) const;
        iterator            end(void);
        const_iterator      end(void) const;

        reverse_iterator          rEnd(void);
        const_reverse_iterator    rEnd(void) const;
        reverse_iterator          rBegin(void);
        const_reverse_iterator    rBegin(void) const;

};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	begin()
{
	return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	end()
{
	return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	begin() const
{
	return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	end() const
{
	return this->c.end();
}


#endif