#ifndef DATA_HPP
# define DATA_HPP

# include "Serializer.hpp"

class Data
{
	private:
		void	*ptr;

	public:
		Data();
		Data(void *_ptr);
		Data(const Data& other);
		Data& operator=(const Data& other);
		~Data();
};

#endif