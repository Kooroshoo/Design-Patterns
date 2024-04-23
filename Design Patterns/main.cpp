#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

// Character struct representing a game character
struct Character {
    int x;
    int y;
    std::string name;

    // Constructor
    Character(std::string _name) : name(_name), x(0), y(0) {}

    // Method to move the character
    void move(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

// Command interface
class Command {
public:
    virtual ~Command() {}
    virtual void execute(Character& c) = 0;
    virtual void undo(Character& c) = 0;
};

// Move command class
class Move : public Command {
public:
    void execute(Character& c) override {
        int randomx = rand() % 4;
        int randomy = rand() % 4;
        c.move(randomx, randomy);
        x = randomx;
        y = randomy;
        std::cout << c.name << " moved " << x << "," << y << std::endl;
    }

    void undo(Character& c) override {
        c.move(-x, -y);
        std::cout << c.name << " undo " << -x << "," << -y << std::endl;
    }

private:
    int x;
    int y;
};

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Vector to hold command objects
    std::vector<Command*> command_queue;

    // Create a character
    Character character("char");

    // Create move commands and add them to the command queue
    Move* move1 = new Move;
    command_queue.push_back(move1);
    Move* move2 = new Move;
    command_queue.push_back(move2);
    Move* move3 = new Move;
    command_queue.push_back(move3);
    Move* move4 = new Move;
    command_queue.push_back(move4);

    // Execute move commands for the character
    for (int i = 0; i < command_queue.size(); i++) {
        command_queue[i]->execute(character);
    }

    // Undo move commands for the character
    for (int i = command_queue.size() - 1; i >= 0; i--) {
        command_queue[i]->undo(character);
    }

    // Free memory allocated for command objects
    for (Command* cmd : command_queue) {
        delete cmd;
    }

    return 0;
}