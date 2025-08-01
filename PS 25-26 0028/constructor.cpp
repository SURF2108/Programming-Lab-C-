#include<iostream>
using namespace std;

// Default Constructor:
/*
class Person{
	public:
		//Member variables
		string name;
		int age;
		
		//Default constructor
		Person(){
			name = "unknown";
			age = 0;
		}
		
		//Member function to display person's details
		void display(){
			cout<<"Name: "<<name<<", Age: "<<age<<endl;
		}
};
*/

///Parameter Constructor:
/*
class Person{
	public:
		//Member variables
		string name;
		int age;
		
		//Default constructor
		Person(string n, int a){
			name = n;
			age = a;
		}
		
		//Member function to display person's details
		void display(){
			cout<<"Name: "<<name<<", Age: "<<age<<endl;
		}
};
*/

//Copy Constructor:
class Person{
	public:
		//Member variables
		string name;
		int age;
		
		Person(string n, int a){
			name = n;
			age = a;
		}
		
		//copy constructor
		Person(const Person &p1){
			name = p1.name;
			age = p1.age;
		}
		
		//Member function to display person's details
		void display(){
			cout<<"Name: "<<name<<", Age: "<<age<<endl;
		}
};

int main(){
	
	//Default constructor
	/*
	Person p;
	p.display();          //Default constructor 
	*/
	
	//Parameterised Constructor
	/*
	Person p("Raj",25);
	Person p1("Rahul",26);
	p.display();
	p1.display();          
	*/
	
	//Copy Constructor
	Person p1("Rahul",30);
	Person p2 = p1;        // this calls the copy constructor
	p2.display();
	return 0;
}