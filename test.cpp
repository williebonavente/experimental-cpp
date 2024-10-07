#include<iostream>
#include<string>
using namespace std;

// Define a struct with a constructor
struct Person {
    string name;
    int age;
    string address;
    
    // Constructor to initiliaze struct from an array
    Person(string arr[3]) {
        name = arr[0];
        age = stoi(arr[1]);
        address = arr[2];
    }
};


int main(void) {
    // Dataset
    string dataset[3] = {"John Doe", "30", "123 Main Street"};
    
    // Initialize a Person struct using the constructor
    Person person(dataset);

    // Output the value
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;

    return 0;
}

