#include "mittari.h"

mittari::mittari() {
    cout<<"mittari luotu"<<endl;
    setup();

}
mittari::~mittari()
{
    cout<<"mittari tuhottu"<<endl;
}

void mittari::setup()
{
    varoitusvalo = 0;
    lcdolio.begin();
    dhtolio.begin();
}
void mittari::mittaus()
{
    float t =dhtolio.readTemperature();
    if (t<10)
    {
        varoitusvalo = 1;
    }
    else
    {
        varoitusvalo = 0;

    }
    if(varoitusvalo==1)
    {
        cout<<lampotila alhainen<<endl;
    }
    string s = lcdolio.floatToString(t);
    lcdolio.print(s);
}
