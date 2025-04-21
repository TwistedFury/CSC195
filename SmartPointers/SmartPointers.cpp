#include <iostream>
#include <memory>

using namespace std;

template<typename T>
struct smart_ptr
{
    smart_ptr() = default;
    smart_ptr(T* p) : p{ p } {}
    ~smart_ptr()
    {
        delete p;
        cout << "deleted." << endl;
    }

    T Dereference() { return *p; }
    // Operator overload
    T& operator * () { return *p; }
    T* operator & () { return p; }

    T* p = nullptr;
};

int main()
{
    int i = 5;
    int* p = &i;

    // Reviewing scope for the fifth time

    {
        smart_ptr<int> sptr{ new int(10) };
        cout << sptr.Dereference() << endl;

        smart_ptr<float> sptr2{ new float(1.05f) };
        cout << sptr2.p << endl;
    }
    // unique_ptr<int> uptr = make_unique<int>(5);
    std::unique_ptr<int> uptr = std::make_unique<int>(5);
    cout << *uptr << endl;

    std::shared_ptr<int> sharedptr = std::make_shared<int>(34);
    std::shared_ptr<int> sharedptr2 = sharedptr;

}
