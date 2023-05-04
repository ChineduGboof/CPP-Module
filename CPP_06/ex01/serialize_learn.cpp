#include <iostream>
#include <fstream>

class Person {
public:
    std::string name;
    int age;
    double height;
    
    // Serialization function
    void serialize(std::ostream& out) const {
        out.write(name.c_str(), name.size() + 1);
        out.write(reinterpret_cast<const char*>(&age), sizeof(age));
        out.write(reinterpret_cast<const char*>(&height), sizeof(height));
    }
    
    // Deserialization function
    void deserialize(std::istream& in) {
        char buffer[256];
        in.getline(buffer, 256);
        name = buffer;
        in.read(reinterpret_cast<char*>(&age), sizeof(age));
        in.read(reinterpret_cast<char*>(&height), sizeof(height));
    }
};

int main() {
    Person p1 = {"Alice", 30, 1.65};
    
    // Serialize p1 to a file
    std::ofstream file("person.bin", std::ios::binary);
    p1.serialize(file);
    file.close();
    
    // Deserialize p2 from the file
    Person p2;
    std::ifstream infile("person.bin", std::ios::binary);
    p2.deserialize(infile);
    infile.close();
    
    // Print p2 to verify that deserialization worked
    std::cout << "Name: " << p2.name << std::endl;
    std::cout << "Age: " << p2.age << std::endl;
    std::cout << "Height: " << p2.height << std::endl;
    
    return 0;
}
