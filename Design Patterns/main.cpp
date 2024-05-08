#include <iostream>
#include <memory>

// Abstract Product
class Product {
public:
    virtual void operation() = 0;
    virtual ~Product() {}
};

// Concrete Products
class ConcreteProductA : public Product {
public:
    void operation() override {
        std::cout << "ConcreteProductA operation\n";
    }
};

class ConcreteProductB : public Product {
public:
    void operation() override {
        std::cout << "ConcreteProductB operation\n";
    }
};

// Abstract Creator
class Creator {
public:
    virtual std::unique_ptr<Product> factoryMethod() = 0;
    void someOperation() {
        std::unique_ptr<Product> product = factoryMethod();
        product->operation();
    }
    virtual ~Creator() {}
};

// Concrete Creators
class ConcreteCreatorA : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() override {
        return std::make_unique<ConcreteProductA>();
    }
};

class ConcreteCreatorB : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() override {
        return std::make_unique<ConcreteProductB>();
    }
};

int main() {
    // Client code
    std::unique_ptr<Creator> creatorA = std::make_unique<ConcreteCreatorA>();
    creatorA->someOperation();

    std::unique_ptr<Creator> creatorB = std::make_unique<ConcreteCreatorB>();
    creatorB->someOperation();

    return 0;
}
