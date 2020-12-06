#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class client {
public:
	string name;
	void uName()
	{
		cout << "Enter Name \n";
		cin >> name;
	}
	int age;
	void uAge(){
		cout << "Enter Age \n";
		cin >> age;
	}
	string email;
	void uMail() {
		cout << "Enter email \n";
		cin >> email;
	}
};

//this class contains different movies for different audiences
//displaying the movies based on the client’s age
class cinema {
public:
	ifstream Movies;
	Movies.open("gMovieDescriptions.txt");
};
int main()
{
client userName;
userName.uName();
client userAge;
userAge.uAge();
client userMail;
userMail.uMail();







return 0;
}