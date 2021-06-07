#include <iostream>

class Debug
{
public:
    constexpr Debug(bool hw, bool io, bool o) : hardware(hw), input_output(io), other(o) {}
    constexpr Debug(bool state = true) : hardware(state), input_output(state), other(state) {}
    constexpr bool any() { return hardware || input_output || other; }
    void set_hardware(bool hw) { hardware = hw; }
    void set_input_output(bool io) { input_output = io; }
    void set_other(bool o) { other = o; }

private:
    bool hardware;
    bool input_output;
    bool other;
};

int main()
{
    constexpr Debug io_sub(false, true, false);
    if (io_sub.any())
        std::cerr << "Message 1" << std::endl;

    constexpr Debug prod(false);
    if (prod.any())
        std::cerr << "Message 2" << std::endl;

    Debug db(false);
    if (db.any())
        std::cerr << "Message 3" << std::endl;

    db.set_hardware(true);
    if (db.any())
        std::cerr << "Message 4" << std::endl;

    return 0;
}