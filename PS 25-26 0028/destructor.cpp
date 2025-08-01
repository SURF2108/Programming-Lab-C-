#include <iostream>
using namespace std;

class Person{
public:
	char* name;      //Pointer to hold dynamically allocated memory
	int age;
	
	//Constructor:
	Person(const char* n, int a){
		//Allocate memory for name (+1 for null terminator)
		name = new char[strlen(n)+1];
		
		//Copy the provided name into the allocated memory
		strcpy(name,n);
		age = a;
		cout<<"Constructor called: "<<name<<endl;
	}
	
	//Destructor:
	~Person(){
		//free the dynamically allocated memory
		delete[] name;
		cout<<"Destructor called for: "<<name<<endl;
	}
	
	void display(){
		cout<<"Name: "<<name<<", Age: "<<age<<endl;
	}
};

int main(){
	Person p1("Raj",28);    //Constructor called
	p1.display();
	
	//WHen p1 goes out of scope, destructor is called automatically
}