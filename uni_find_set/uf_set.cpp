#include <iostream>
#include <string.h>

#include "uf_set.h"

uf_set::uf_set(int n):capacity_(n)
{
	uf_set_ = new int[n];
	memset(uf_set_,0,n * sizeof(int));
	rank_ = new int[n];
	memset(rank_,0,n * sizeof(int));
}

uf_set::~uf_set()
{
	if(NULL != uf_set_)
	{
		delete uf_set_;
		uf_set_ = NULL;
	}
	if(NULL != rank_)
	{
		delete rank_;
		rank_ = NULL;
	}
}

//init the set
void uf_set::makeSet()
{
	int i = 0;
	for(i = 0;i < capacity_; ++i)
	{
		uf_set_[i] = i;
	}
	for(i = 0;i < capacity_; ++i)
	{
		rank_[i] = 1;
	}
}

//find the root of the set
//the first cycle is to find the root p
//the second cycle is to let x and the parents of x's parent point to p
int uf_set::find(int x)
{
	int p = x,t;
	while(p != uf_set_[p])
	{
		p = uf_set_[p];
	}
	while(x != p)
	{
		t = uf_set_[x];
		uf_set_[x] = p;
		x = t;
	}
	return x;
}

//recursion
//uf_set::find(int x)
//{
//	if(x != uf_set_[x])
//	{
//		uf_set_[x] = find(uf_set_[x]);
//	}
//	return uf_set_[x];
//}
//
//

void uf_set::unionSet(int x,int y)
{
	if((x = find(x)) == (y = find(y)))
	{
		return;	
	}
	//x、y分别是两个集合的根数据
	if(rank_[x] > rank_[y])
	{
		uf_set_[y] = x;
	}
	else
	{
		//rank_[x]表示以x为根节点的树的深度
		if(rank_[x] == rank_[y])
		{
			rank_[y]++;
		}
		uf_set_[x] = y;
	}

}
