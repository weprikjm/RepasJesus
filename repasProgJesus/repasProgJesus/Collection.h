class Collection
{

public:
	Collection();
	Collection(unsigned int*);

	void Add(int*);

	bool exist(int)const;

	void Delete(int*);

	Collection* Intersection(Collection*);

	Collection* Difference(Collection*);

	Collection* Union(Collection*);

	//Atributes
private:
	int* elements;


};

