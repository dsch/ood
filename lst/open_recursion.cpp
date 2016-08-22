class A
{
public:
    virtual void foo() = 0;
    virtual ~A();

    void bar()
    {
        this->foo();
    }

};

class B: A
{
public:
    void foo();
};
