#include <iostream>
#include <iomanip>
#include <mutex>
#include <thread>


typedef int Some_type;

class Value
{
    public:
        Value(Some_type const &i) : x_(i) {}
        //...
        friend void swap(Value &lhs, Value &rhs);

    private:
        std::mutex m_;
        Some_type x_;
};

void waste_time()
{
    volatile int j;
    for (int i = 0; i != 5000; ++i)
        ++j;
}

void swap(Value &lhs, Value &rhs)
{
    if (&lhs == &rhs)
        return;
    lock_guard<mutex> l1(lhs.m_);   
    lock_guard<mutex> l2(rhs.m_);   
    swap(lhs.x_, rhs.x_);          
}


int main()
{
    Value v1(42), v2(100);

    for (int i = 0; i != 1000000; ++i)
    {
        std::cout << setw(6) << i << " ";
        if (i % 11 == 10) cout << '\n';

        thread t1([&]{ ::swap(v1, v2); });
        thread t2([&]{ ::swap(v2, v1); });

        t1.join();
        t2.join();
    }
}
