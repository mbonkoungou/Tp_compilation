#if ! defined ( Symbol_H )
#define Symbol_H


class Symbol {
    protected:
        int ident;

    public:
        Symbol(int id) : ident(id) {}
        virtual ~Symbol() {}
        void print();
        operator int() const {return ident;} 
};



class Expr : public Symbol {
    public:
        Expr():Symbol(EXPR) {}
        virtual 
}

#endif // Symbol_H