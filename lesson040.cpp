#include <iostream>

using namespace std;




int main() {
	//int elephant_count;
	int elephant_count{};
	int lion_count{};
	int dog_count{ 10 };
	int cat_count{ 15 };
	int domesticated_animals{ dog_count + cat_count };

	cout << "Elephants: " << elephant_count << endl;
	cout << "Lions: " << lion_count << endl;
	cout << "Dogs: " << dog_count << endl;
	cout << "Cats: " << cat_count << endl;
	cout << "Domesticated animals: " << domesticated_animals << endl;




	return 0;
}

