#include <iostream>

#include "uf_set.h"

int main()
{
	int num = 10,i = 0;
	uf_set ufset(num);
	ufset.makeSet();
	std::cout <<"execute makeSet funciont"<<std::endl;
	std::cout <<"init array"<<std::endl;
	for(i = 0;i < num; ++i)
	{
		std::cout << ufset.uf_set_[i] << '\t';
	}
	std::cout << std::endl;
	
	std::cout <<"init rank array"<<std::endl;
	for(i = 0;i < num; ++i)
	{
		std::cout << ufset.rank_[i] << '\t';
	}
	std::cout << std::endl;
	ufset.unionSet(1,2);
	ufset.unionSet(1,3);
	ufset.unionSet(2,4);
	ufset.unionSet(2,7);
	std::cout <<"after union array"<<std::endl;
	for(i = 0;i < num; ++i)
	{
		std::cout << ufset.uf_set_[i] << '\t';
	}
	std::cout << std::endl;
	
	std::cout <<"after union rank array"<<std::endl;
	for(i = 0;i < num; ++i)
	{
		std::cout << ufset.rank_[i] << '\t';
	}
	std::cout << std::endl;

	return 0;
}
