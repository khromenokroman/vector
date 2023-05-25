#include <iostream>

template<typename T>
class Vector
{
private:
    int size_vector;
    int capacity_vector;
    T *vec = nullptr;

public:
    explicit Vector(int size_) //init vector
    {
        size_vector = size_;
        capacity_vector = size_vector*2;
        vec = new T[capacity_vector];
        std::cout << "create vector congrat!!!" << std::endl;
    }

    int size() // get size vector
    {
        return size_vector;
    }
    int capacity() // get capacity vector
    {
        return capacity_vector;
    }
    void push_back(int item)
    {
        vec[size_vector] = item;
        size_vector++;
    }
    void erase(int item);     // erace obj
    void insert(int item);    // insert obj

    ~Vector() = default; // destr

    Vector &operator=(const Vector &vec) = delete;  // =ref del
    Vector &operator=(const Vector &&vec) = delete; // =move del
    Vector(const Vector &vec) = delete;             // copy
    Vector(const Vector &&vec) = delete;            // move
};


// my exeptions

class My_error final : public std::exception
{
public:
    explicit My_error(const std::string &&message) : message{message} {}
    const char *what() const noexcept override { return message.c_str(); } // message
    My_error &operator=(My_error &&err) = delete;                          // =move del
    My_error(const My_error &&err) = delete;                               // move del
    My_error &operator=(My_error &err) = delete;                           // = del
    My_error(const My_error &err) = delete;                                // copy del
private:
    std::string message; // message
};