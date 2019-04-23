class uf_set
{
public:
	uf_set(int n);		
	virtual~uf_set();
	void makeSet();
	int find(int x);
	void unionSet(int x,int y);


	friend int main();
private:
	int 		capacity_;
	int* 		uf_set_;
	int* 		rank_;
};
