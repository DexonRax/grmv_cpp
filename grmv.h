#ifndef _GRMV_
#define _GRMV_

template <typename DataType>
class Grmv {
    private:
    DataType* values;
    int size = 0;

    public:
    Grmv();
    ~Grmv();
    void push(DataType);
    void insert(DataType, int);
    void pop();
    void removeAt(int);
    int length() const;
    DataType get(int) const;
    DataType& operator[](int index);
    const DataType& operator[](int index) const;
};

#include "grmv_impl.tpp"

#endif