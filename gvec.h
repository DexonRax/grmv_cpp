#ifndef _GVEC_
#define _GVEC_

template <typename DataType>
class Gvec {
    private:
    DataType* values;
    int size = 0;

    public:
    Gvec();
    ~Gvec();
    void reserve(int);
    void push(DataType);
    void insert(DataType, int);
    void pop();
    void removeAt(int);
    int length() const;
    bool isEmpty() const;
    DataType get(int) const;
    DataType& operator[](int index);
    const DataType& operator[](int index) const;
};

#include "gvec_impl.tpp"

#endif