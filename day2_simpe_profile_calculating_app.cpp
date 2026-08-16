#include <iostream> 
#include <string>  // sabit boyutlu diziler tanımlama zorunluluğunu ve bellek taşması riskini ortadan kaldırır. // 

int main() {
	std::string name;
	int age;
	double height;

	std::cout << "Enter your name: ";
	std::cin >> name;

	std::cout << "Enter your age: ";
	std::cin >> age;
	
	std::cout << "Enter your height: ";
	std::cin >> height;

	std::cout << "Profie Information: ";
	std::cout << "Name:  "<< name <<" ";
	std::cout << "Age: " << age << " ";
	std::cout << "Height: " << height << std::endl;

	return 0;

}