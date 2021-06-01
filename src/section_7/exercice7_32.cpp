#include <iostream>
#include <string>
#include <vector>

class Screen;

class WindowManager
{
public:
    WindowManager();
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    std::vector<Screen> screens;
};

class Screen
{

    friend void WindowManager::clear(ScreenIndex);

public:
    using pos = std::string::size_type;
    using content_type = char;
    Screen() = default;
    Screen(pos ht, pos wd, content_type c) : height(ht), width(wd), contents(ht * wd, c){};
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){};
    content_type const &get() { return contents[cursor]; }
    content_type const &get(pos r, pos c);
    Screen set(content_type c);
    Screen set(pos r, pos col, content_type c);
    Screen move(pos r, pos c);
    Screen display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(std::ostream &os) const { os << contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen::content_type const &Screen::get(Screen::pos r, Screen::pos c)
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen Screen::move(Screen::pos r, Screen::pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen Screen::set(Screen::content_type c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen
Screen::set(Screen::pos r, Screen::pos col, Screen::content_type c)
{
    contents[r * width + col] = c;
    return *this;
}

void WindowManager::clear(WindowManager::ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n-----\n";
    myScreen.display(std::cout);
    std::cout << "\n-----\n";

    Screen myScreen2(5, 3);
    const Screen blank(5, 3);
    myScreen2.set('#').display(std::cout); // calls nonconst version
    std::cout << "\n-----\n";
    blank.display(std::cout); // calls const version
    std::cout << "\n-----\n";

    return 0;
}