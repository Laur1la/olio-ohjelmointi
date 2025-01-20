#ifndef LCD_CPP
#define LCD_CPP
#include "lcd.h"
using namespace std;

LCD::LCD(){
    cout<<LCD constructor<<enld;
}
LCD::~LCD()
{
    cout<<"LCD constructor"<<endl;
    cout<<"LCD::begin"
}
void LCD::begin();
{
    text= "";
}
void LCD::print(string);

{
    cout<<text<endl;
    cout<<s<<endl;
}
#endif // LCD_CPP
