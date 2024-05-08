#include <iostream>
#include <string>

// Product class
class Burger {
public:
    void setBuns(const std::string& bunStyle) {
        m_buns = bunStyle;
    }
    void setPatty(const std::string& pattyStyle) {
        m_patty = pattyStyle;
    }
    void setCheese(const std::string& cheeseStyle) {
        m_cheese = cheeseStyle;
    }

    void showBurger() {
        std::cout << "Burger with " << m_buns << " buns, " << m_patty << " patty, and " << m_cheese << " cheese\n";
    }

private:
    std::string m_buns;
    std::string m_patty;
    std::string m_cheese;
};

// Builder class
class BurgerBuilder {
public:
    BurgerBuilder() {
        m_burger = new Burger();
    }

    BurgerBuilder* addBuns(const std::string& bunStyle) {
        m_burger->setBuns(bunStyle);
        return this;
    }

    BurgerBuilder* addPatty(const std::string& pattyStyle) {
        m_burger->setPatty(pattyStyle);
        return this;
    }

    BurgerBuilder* addCheese(const std::string& cheeseStyle) {
        m_burger->setCheese(cheeseStyle);
        return this;
    }

    Burger* build() {
        return m_burger;
    }

private:
    Burger* m_burger;
};

int main() {
    Burger* burger = (new BurgerBuilder())
        ->addBuns("sesame")
        ->addPatty("fish-patty")
        ->addCheese("swiss cheese")
        ->build();

    burger->showBurger();

    delete burger;

    return 0;
}
