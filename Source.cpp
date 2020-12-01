#include <iostream>
#include <string>
using namespace std;

class Dogs {
private:
	string name;
	int age;
	float weight;
public:
	Dogs() {
		name = "";
		age = 0;
		weight = 0;
	}
	void setName(string fname) { name = fname; }
	string getName() { return name; }
	void setAge(int fage) { age = fage; }
	int getAge() { return age; }
	void setWeight(float fweight) { weight = fweight; }
	float getWeight() { return weight; }
	void showDogs() {
		cout << "Dog's name: " << name << endl;
		cout << "Dog age: " << age << endl;
		cout << "Dog weight: " << weight << endl;
	}
};
int main() {
	Dogs firstDog;
	firstDog.setName("Jack");
	firstDog.setAge(4);
	firstDog.setWeight(7.3);
	firstDog.showDogs();
	return 0;
}