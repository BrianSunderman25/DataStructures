#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*classes for JSON*/
struct Value 
{
	virtual ~Value() = default;
	virtual int weight() const;
};

struct Null : Value
{
	int weight() const { return 1; }

};

struct Bool : Value
{
	Bool(bool B) : Val(B) {}
	bool Val;
};

struct String : Value, string
{
	using string::string;

};

struct Array : Value, vector<Value*>
{
	using vector<Value*>::vector;
	~Array() {
		for (Value* v : *this)
			delete v;
	}
};



int main()
{
	system("Pause");
    return 0;
}

/*Functions for parsing*/

Value * parse(char * F, char * L)
{


}


Value* parse_array(char * F, char * L)
{
	++F; 
	Array * A = new Array();
	while (true)
	{
		Value * v = parse(F, L);
	}
}
