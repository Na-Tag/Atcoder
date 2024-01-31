#include <iostream>
#include <utility>
using namespace std;

struct Clock
{
    int hour;
    int minute;
    int second;

    void set(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    string to_str()
    {
        string ret;
        if (hour < 10)
            ret += "0";
        ret += to_string(hour);
        ret += ":";

        if (minute < 10)
            ret += "0";
        ret += to_string(minute);
        ret += ":";

        if (second < 10)
            ret += "0";
        ret += to_string(second);
        return ret;
    }

    void shift(int diff_second)
    {
        /*
        int num_h = 0, num_m = 0, num_s = 0;
        diff_sec += hour * 3600 + minute * 60 + second;

        num_h = diff_sec / 3600;
        num_m = diff_sec / 60 - num_h * 60;
        num_s = diff_sec - num_m * 60 - num_h * 60 * 60;
        if(hour + num_h >= 24){
            num_h -= (24-hour);
        }

        hour += num_h;
        minute += num_m;
        second += num_s;
        return;

        if (diff_sec >= 24 * 3600 - 1)
        {
            hour = 23;
            minute = 59;
            second = 59;
            return;
        }
        hour = diff_sec / 3600;
        minute = diff_sec / 60 - hour * 60;
        second = diff_sec - minute * 60 - hour * 60 * 60;
        hour = num_h;
        minute = num_m;
        second = num_s;
        */

        int diff_hour = diff_second / 3600;
        diff_second %= 3600;
        int diff_minute = diff_second / 60;
        diff_second %= 60;

        second += diff_second;
        if (second >= 60)
        {
            minute += 1;
            second -= 60;
        }
        else if (second < 0)
        {
            minute -= 1;
            second += 60;
        }

        minute += diff_minute;
        if (minute >= 60)
        {
            hour += 1;
            minute -= 60;
        }
        else if (minute < 0)
        {
            hour -= 1;
            minute += 60;
        }

        hour += diff_hour;
        if (hour >= 24)
        {
            hour -= 24;
        }
        else if (hour < 0)

        {
            hour += 24;
        }
    }
};

int main()
{

    int hour, minute, second;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    Clock clock;

    clock.set(hour, minute, second);

    cout << clock.to_str() << endl;

    clock.shift(diff_second);

    cout << clock.to_str() << endl;
