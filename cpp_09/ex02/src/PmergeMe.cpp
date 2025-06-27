#include "../include/PmergeMe.hpp"

// ---------------Constructeur(defaut)--------------- //
PmergeMe::PmergeMe()
{}

// -------------------Constructeur------------------- //
PmergeMe::PmergeMe(int ac, char **av)
{
	for (int i = 1; i < ac; ++i)
	{
		std::istringstream iss(av[i]);
		int num;
		if (!(iss >> num) || num < 0)
			throw std::logic_error("Error: Wrong input (invalid number).");
		vec.push_back(num);
		deq.push_back(num);
	}
}

// ----------------Constructeur(copy)---------------- //
PmergeMe::PmergeMe(const PmergeMe& other) 
{
	*this = other;
}

// ------------Constructeur (assignement)------------ //
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

// -------------------Destructeur-------------------- //
PmergeMe::~PmergeMe()
{}

// --------------------Print(V\D)-------------------- //
void	PmergeMe::printV() const
{
	for (size_t i = 0; i < vec.size(); ++i)
		std::cout << " " << vec[i];
	std::cout << "." << std::endl;
}

void	PmergeMe::printD() const
{
	for (size_t i = 0; i < deq.size(); ++i)
		std::cout << " " << deq[i];
	std::cout << "." << std::endl;
}

// -----------------------Algo----------------------- //
static bool pairComp(const std::pair<int, int> &a, const std::pair<int, int> &b)
{
	return a.first < b .first;
}

static std::vector<size_t> generatorJacob(size_t n)
{
	std::vector<size_t> seq;
    if (n == 0) return seq;
    seq.push_back(0);
    if (n == 1) return seq;
    
    seq.push_back(1);
    for (size_t i = 2; ; ++i) {
        size_t next = seq[i-1] + 2 * seq[i-2];
        if (next > n) break;
        seq.push_back(next);
    }
    return seq;
}

void PmergeMe::fordJohnsonV(std::vector<int> &v)
{
	if (v.size() < 2)
		return;

	std::vector<std::pair<int, int> > pair;
	const bool has_odd = v.size() % 2;
	const int last = has_odd ? v.back() : 0;
	const size_t limit = has_odd ? v.size() - 1 : v.size();

	//----mise en place de pair----//
	for (size_t i = 0; i < limit; i += 2)
	{
		if (v[i] < v[i + 1])
			pair.push_back(std::make_pair(v[i], v[i + 1]));
		else
			pair.push_back(std::make_pair(v[i + 1], v[i]));
	}

	//----trie pair----//
	std::sort(pair.begin(), pair.end(), pairComp);

	//----chaine de trie----//
	std::vector<int> main_chain;
	for (size_t i = 0; i < pair.size(); i++)
		main_chain.push_back(pair[i].first);

	//----Jacobsthal----//
	std::vector<size_t> jacob = generatorJacob(pair.size());
	std::vector<bool> inserted(pair.size(), false);

	//----insertion----//
	for (size_t i = 0; i < jacob.size(); ++i)
	{
		const size_t pos = jacob[i];
		if (pos >= pair.size() || inserted[pos])
			continue;
		const int value = pair[pos].second;
		std::vector<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), value);
		main_chain.insert(it, value);
		inserted[pos] = true;
	}

	//----2 insertion----//
	for (int i = pair.size() - 1; i >= 0; --i)
	{
		if (!inserted[i])
		{
			const int value = pair[i].second;
			std::vector<int>:: iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), value);
			main_chain.insert(it, value);
		}
	}

	//----impair----//
	if (has_odd)
	{
		std::vector<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), last);
		main_chain.insert(it, last);
	}

	v = main_chain;
}

void PmergeMe::fordJohnsonD(std::deque<int> &d)
{
	if (d.size() < 2)
		return;
	
	std::deque<std::pair<int, int> > pair;
	const bool has_odd = d.size() % 2;
	const int last = has_odd ? d.back() : 0;
	const size_t limit = has_odd ? d.size() - 1 : d.size();

	for (size_t i = 0; i < limit; i += 2)
	{
		if (d[i] < d[i + 1])
			pair.push_back(std::make_pair(d[i], d[i + 1]));
		else
			pair.push_back(std::make_pair(d[i + 1], d[i]));
	}

	std::sort(pair.begin(), pair.end(), pairComp);

	std::deque<int> main_chain;
	for (size_t i = 0; i < pair.size(); ++i)
		main_chain.push_back(pair[i].first);

	std::vector<size_t> jacob  = generatorJacob(pair.size());
	std::vector<bool> inserted(pair.size(), false);

	for (size_t i = 0; i < jacob.size(); i++)
	{
		const size_t pos = jacob[i];
		if (pos >= pair.size() || inserted[pos])
			continue;
		const int value = pair[pos].second;
		std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), value);
		main_chain.insert(it, value);
		inserted[pos];
	}

	for (int i = pair.size() - 1; i >= 0; ++i)
	{
		if (!inserted[i])
		{
			const int value = pair[i].second;
			std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), value);
			main_chain.insert(it, value);
		}
	}

	if (has_odd)
	{
		std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), last);
		main_chain.insert(it, last);
	}
	d = main_chain;
}

// ----------------------Timeur---------------------- //
void	PmergeMe::timer()
{
	const int iterations = 1000;
	std::clock_t start, end;

	std::cout << "Before:";
	printV();

	// std::vector<int>::iterator it = vec.begin();
	// for (; it != vec.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// 	if (it + 1 != vec.end() && *it > (*it + 1))
	// 		break;
	// }
	// std::cout << *it << std::endl;
	// if (it == this->vec.end())
	// {
	// 	std::cout << "After: ";
	// 	printV();
	// 	std::cout << "No time because this array is already sorted" << std::endl;
	// 	return ;
	// }

	std::vector<int> copyV = vec;
	std::deque<int> copyD = deq;

	fordJohnsonV(copyV);
	fordJohnsonD(copyD);
	
	std::cout << "After:  ";
	for (size_t i = 0; i < copyV.size(); ++i)
		std::cout << " " << copyV[i];
	std::cout << "." << std::endl;

	start = std::clock();
	for (int i = 0; i < iterations; ++i)
	{
		std::vector<int> copyV = vec;
		fordJohnsonV(copyV);
	}
	end = std::clock();
	double Vtime = 1000000.0 * (end - start) / CLOCKS_PER_SEC / iterations;

	start = std::clock();
	for (int i = 0; i < iterations; ++i)
	{
		std::deque<int> copyD = deq;
		fordJohnsonD(copyD);
	}
	end = std::clock();
	double Dtime = 1000000.0 * (end - start) / CLOCKS_PER_SEC / iterations;

	std::cout << "Time to process a range of " BOLD << vec.size() << END " elements with std::vector: " BOLD << Vtime << END " us.\n"
			  << "Time to process a range of " BOLD << deq.size() << END " elements with std::deque: " BOLD << Dtime << END " us.\n";
}
