#include <iostream>

using namespace std;

enum Day
{
    Sunday = 0,
    Monday,
    Tuesday,
    Thursday,
    Friday,
    Saturday,
    InvalidDay = 999,
};

enum class State: int16_t
{
    Init = 0,
    Start,
    Running,
    Pause,
    Stop,
    Exit,
    Invalid = 999,
};

std::ostream &operator << (std::ostream &os, State state)
{
    switch (state)
    {
    case State::Init:
    {
        os << "Init";
        break;
    }

    case State::Start:
    {
        os << "Start";
        break;
    }

    case State::Running:
    {
        os << "Running";
        break;
    }

    case State::Pause:
    {
        os << "Pause";
        break;
    }

    case State::Stop:
    {
        os << "Stop";
        break;
    }

    case State::Exit:
    {
        os << "Init";
        break;
    }

    default:
    {
        os << "Invalid";
        break;
    }

    }
}

int main()
{
//    Day d = 1;
    Day d = Day::Friday;

    cout << d << endl;

    State s;
    s = State::Running;

    cout << s << endl;

    return 0;
}
