#include<iostream>
using namespace std;
void test(){
	try{
		throw"exception in function";
	}
	catch(const char *msg)
	{
		cout<<"exception caught in function";
			throw;
	}

	
}
int main()
{
	try{
		test();
			
	}
	catch(const char *msg){
			cout<<"\nexception caught again in main:"<<msg;
		}
}
