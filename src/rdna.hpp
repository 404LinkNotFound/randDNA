#include <random>
#include <iostream>
#include <string>
using namespace std;

string randDNA(seed,bases,n)
{
	mt19937 eng(seed); //creates a random number
	uniform_int_distribution<string> un(bases);
	
	for(int i=o; i < n ; i++)
		{
			cout<<un(eng)<" ";
		}
		return un(eng);
	
}


