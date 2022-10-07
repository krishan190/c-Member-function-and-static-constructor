#include <iostream>
using namespace std;
class Time
{
private:
    int HR, MIN, SEC;

public:
    void setTime(int h, int m, int s)
    {
        HR = h;
        MIN = m;
        SEC = s;
    }
    void showTime()
    {
        cout << HR << " hr " << MIN << " min " << SEC << " sec " << endl;
    }
    void normalize()
    {
        MIN = MIN + SEC / 60;
        SEC = SEC % 60;
        HR = HR + MIN / 60;
        MIN = MIN % 60;
    }
    // to add the time t1 and t2
    Time add(Time t)
    {
        Time temp;
        temp.HR = HR + t.HR;
        temp.MIN = MIN + t.MIN;
        temp.SEC = SEC + t.SEC;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1, t2, t3;
    t1.setTime(4, 100, 100);
    t2.setTime(4, 100, 100);
    t1.showTime();
    t2.showTime();
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}