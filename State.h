#if ! defined ( State_H )
#define State_H



class State {
    public:
        State();
        State(string name);
        virtual ~State();
        void print() const;
        virtual bool transition(Automate &automate, symbol *s) = 0;
    
    protected:
        string name;
};



class State0 : public state {
    public:
        State0();
        bool transition(Automate &automate, symbol *s);

    protected:

};



class State1 : public state {
    public:
        State1();
        bool transition(Automate &automate, symbol *s);
        
    protected:
    
};



class State2 : public state {
    public:
        State2();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State3 : public state {
    public:
        State3();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State4 : public state {
    public:
        State4();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State5 : public state {
    public:
        State5();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State6 : public state {
    public:
        State6();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State7 : public state {
    public:
        State7();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State8 : public state {
    public:
        State8();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};



class State9 : public state {
    public:
        State9();
        bool transition(Automate &automate, symbol *s);

    protected:
    
};

#endif // State_H


