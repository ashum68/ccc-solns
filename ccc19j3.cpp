#include <iostream>
#include <vector>
using namespace std;

int main () {

int numlines;
std::cin >> numlines; 

for (int i = 0; i < numlines; i++) {
	std::string message;
	std::cin >> message;
	std::string new_message = "";
	int count = 1;
	for (int j = 0; j < message.size(); j++) {
		
		if (message[j] == message[j+1]) {
			count = count + 1;
		}
		else {
			new_message = new_message + std::to_string(count) + " " + message[j] + " ";
			count = 1;
		}
	
	}
	std::cout << new_message << "\n";
}



}