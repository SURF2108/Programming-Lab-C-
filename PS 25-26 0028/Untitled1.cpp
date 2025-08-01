#include <iostream>
using namespace std;

class sample{
	public:
	
	void display(){
		string msg = "Hello World!";
		cout<<msg<<endl;
	}
};

int main(){
	sample obj;
	
	obj.display();
	
	return 0;
}

