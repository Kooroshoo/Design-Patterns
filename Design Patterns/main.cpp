#include <iostream>

class Singleton {
public:
    // Static method to get the singleton instance
    static Singleton& getInstance() {
        // Lazy initialization - instance is created on first use
        static Singleton instance;
        return instance;
    }

    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    void operator=(const Singleton&) = delete;

    // Sample method of the singleton class
    void someMethod() {
        std::cout << "Singleton method called\n";
    }

private:
    // Private constructor to prevent instantiation
    Singleton() {}
};

int main() {
    // Accessing the singleton instance
    Singleton& singletonInstance = Singleton::getInstance();
    singletonInstance.someMethod();

    // Trying to create another instance (will not compile)
    // Singleton anotherInstance = Singleton::getInstance(); // Compilation error

    return 0;
}
