#include <iostream>

class Vector
{
private:
    int size_vector;
    int capacity_vector;
    int *vec = nullptr;

public:
    explicit Vector(int size_);

    int size();               // size obj
    int capacity();   // capacity obj
    void push_back(int item); // add item back
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