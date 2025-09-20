#include "money.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

money money::init(long a, unsigned char b)
{
    money tmp;
    tmp.grn = a;
    tmp.coin = b;
    return tmp;
}

void money::read()
{
    cout << "Grn: ";
    cin >> grn;
    cout << endl << "Coin: ";
    int tmp;
    cin >> tmp;
    coin = tmp;
    cout << endl;
}

void money::display()
{
    if ((int)coin < 10)
    {
        cout << grn << ",0" << (int)coin << endl;
    }
    else
    {
        cout << grn << "," << (int)coin << endl;
    }
}

string money::tostring()
{
    string tmp;
    if ((int)coin < 10)
    {
        tmp = to_string(grn) + ",0" + to_string(coin);
    }
    else
    {
        tmp = to_string(grn) + "," + to_string(coin);
    }
    return tmp;
}

money money::add(long a, unsigned char b)
{
    money tmp;
    tmp.grn = grn + a;
    tmp.coin = (int)coin + (int)b;
    return tmp;
}

money money::sub(long a, unsigned char b)
{
    money tmp;
    tmp.grn = grn - a;
    if ((int)b > (int)coin)
    {
        tmp.grn -= 1;
        tmp.coin = 100 + (int)coin - (int)b;
    }
    else
    {
        tmp.grn -= 1;
        tmp.coin = (int)coin - (int)b;
    }
    return tmp;
}

money money::divide(int a)
{
    money tmp;
    float b = (float)grn / (float)a;
    tmp.grn = b;
    float fractionalPart = (b - (int)b)*100;
    tmp.coin = (int)coin / a + (int)fractionalPart;
    return tmp;
}

money money::dividefloat(float a)
{
    money tmp;
    float b = (float)grn / (float)a;
    tmp.grn = b;
    float fractionalPart = (b - (int)b)*100;
    tmp.coin = (int)coin / a + (int)fractionalPart;
    return tmp;
}

money money::multiplyfloat(float a)
{
    money tmp;
    float b = (float)grn * a;
    tmp.grn = b;
    float fractionalPart = (b - (int)b) * 100;
    if ((int)coin * a + fractionalPart > 100)
    {
        float coins = ((int)coin * a + fractionalPart) / 100;
        tmp.grn += (int)coins;
        tmp.coin = (coins - (int)coins) * 100;
    }
    else
    {
        tmp.coin = (int)coin * a + fractionalPart;
    }
    return tmp;
}

void money::compare(money a)
{
    if (grn == a.grn)
    {
        if ((int)coin > (int)a.coin)
        {
            cout << "A is more than b" << endl;
            return;
        }
        else if ((int)coin == (int)a.coin)
        {
            cout << "A is equal B" << endl;
            return;
        }
        else
        {
            cout << "B is more than a" << endl;
            return;
        }
    }
    if (grn > a.grn)
    {
        cout << "A is more than b" << endl;
    }
    else
    {
        cout << "B is more than a" << endl;
    }
}
