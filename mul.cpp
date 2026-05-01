#include<iostream>
using namespace std;
int main()
{
	try{
		throw"MEOW ERROR";
			throw 10;
			throw 11.11;
	}
	catch(...)
	{
		cout<<"\n UNKNOWN ERROR CAUGHT";
	}
}
