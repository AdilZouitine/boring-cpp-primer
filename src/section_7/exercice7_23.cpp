#include <iostream>
#include <string>

class Screen
{
public:
    using pos = std::string::size_type;
    using content_type = char;
    Screen() = default;
    Screen(pos ht, pos wd, content_type c) : height(ht), width(wd), contents(ht * wd, c){};
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){};
    content_type const &get() { return contents[cursor]; }
    content_type const &get(pos r, pos c);
    Screen &move(pos r, pos c);

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen::content_type const &Screen::get(Screen::pos r, Screen::pos c)
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::move(Screen::pos r, Screen::pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

int main()
{
    return 0;
}