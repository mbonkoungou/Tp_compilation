#include <iostream>

#include "State.h"

using namespace std;


State::State(const std::string& name) : name(name) {}

State::~State() {}

void State::print() const {
    std::cout << "Current State: " << name << std::endl;
}

State0::State0() : State("S0") {}
State1::State1() : State("S1") {}
State2::State2() : State("S2") {}
State3::State3() : State("S3") {}
State4::State4() : State("S4") {}
State5::State5() : State("S5") {}
State6::State6() : State("S6") {}
State7::State7() : State("S7") {}
State8::State8() : State("S8") {}
State9::State9() : State("S9") {}


bool State0::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case VALUE:
        automate.shift(s, new State3);
        break;
    case OPENINGPARENTHESIS:
        automate.shift(s, new State2);
        break;   
    case EXPR:
        automate.simpletransition(s, new State1);
        break; 
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State1::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case ADDITION:
        automate.shift(s, new State4);
        break;
    case MULTIPLICATION:
        automate.shift(s, new State5);
        break;
    case END:
        break;    
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State2::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case VALUE:
        automate.shift(s, new State3);
        break;
    case OPENINGPARENTHESIS:
        automate.shift(s, new State2);
        break;
    case EXPR:
        automate.simpletransition(s, new State6);
        break;    
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State3::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case ADDITION:
        automate.reduction(1, new ADDITION);
        break;
    case MULTIPLICATION:
        automate.reduction(1, new MULTIPLICATION);
        break;
    case CLOSINGPARENTHESIS:
        automate.reduction(1, new CLOSINGPARENTHESIS);
        break;
    case END:
        automate.reduction(1, new END);
        break;    
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State4::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case VALUE:
        automate.shift(s, new State3);
        break;
    case OPENINGPARENTHESIS:
        automate.shift(s, new State2);
        break;
    case EXPR:
        automate.simpletransition(s, new State7);
        break;    
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State5::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case VALUE:
        automate.shift(s, new State3);
        break;
    case OPENINGPARENTHESIS:
        automate.shift(s, new State2);
        break;
    case EXPR:
        automate.simpletransition(s, new State8);
        break;    
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State6::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case ADDITION:
        automate.shift(s, new State4);
        break;
    case MULTIPLICATION:
        automate.shift(s, new State5);
        break;
    case CLOSINGPARENTHESIS:
        automate.shift(s, new State9);
        break;    
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State7::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case ADDITION:
        automate.reduction(3, new ADDITION);
        break;
    case MULTIPLICATION:
        automate.shift(s, new State5);
        break;
    case CLOSINGPARENTHESIS:
        automate.reduction(3, new CLOSINGPARENTHESIS);
        break;
    case END:
        automate.reduction(3, new END);
        break;
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State8::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case ADDITION:
        automate.reduction(3, new ADDITION);
        break;
    case MULTIPLICATION:
        automate.reduction(3, new MULTIPLICATION);
        break;
    case CLOSINGPARENTHESIS:
        automate.reduction(3, new CLOSINGPARENTHESIS);
        break;
    case END:
        automate.reduction(3, new END);
        break;
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}



bool State9::transition(Automate &automate, Symbol *s) {
    switch (*s)
    {
    case ADDITION:
        automate.reduction(3, new ADDITION);
        break;
    case MULTIPLICATION:
        automate.reduction(3, new MULTIPLICATION);
        break;
    case CLOSINGPARENTHESIS:
        automate.reduction(3, new CLOSINGPARENTHESIS);
        break;
    case END:
        automate.reduction(3, new END);
        break;
    default:
        cout<<"Syntax error"<<endl;
        break;
    }
    return false;

}


