#include<stdexcept>
#include "gvec.h"

template <typename DataType>
Gvec<DataType>::Gvec() : values(nullptr), size(0) {}

// Destructor
template <typename DataType>
Gvec<DataType>::~Gvec() {
    delete[] values;
}

template <typename DataType>
void Gvec<DataType>::reserve(int new_size) {
    if(size < 0){
        return;
    }
    DataType* new_values = new DataType[new_size];
    for (int i = 0; i < size; i++) {
        new_values[i] = values[i];
    }
    //new_values[size] = val;

    delete[] values;
    values = new_values;
    size = new_size;
}


template <typename DataType>
void Gvec<DataType>::push(DataType val) {
    DataType* new_values = new DataType[size + 1];
    for (int i = 0; i < size; i++) {
        new_values[i] = values[i];
    }
    new_values[size] = val;

    delete[] values;
    values = new_values;
    size++;
}

template <typename DataType>
void Gvec<DataType>::insert(DataType val, int index) {
    DataType* new_values = new DataType[size + 1];
    for (int i = 0; i < size + 1; i++) {
        if(i < index){
            new_values[i] = values[i];
        }else if(i > index){
            new_values[i] = values[i-1];
        }else{
            new_values[i] = val;
        }
        
    }

    delete[] values;
    values = new_values;
    size++;
}

template <typename DataType>
void Gvec<DataType>::pop() {
    if (size == 0) {
        throw std::out_of_range("Cannot pop from an empty vector");
    }
    DataType* new_values = new DataType[size - 1];
    for (int i = 0; i < size - 1; i++) {
        new_values[i] = values[i];
    }

    delete[] values;
    values = new_values;
    size--;
}

template <typename DataType>
void Gvec<DataType>::removeAt(int index) {
    if (size == 0) {
        throw std::out_of_range("Cannot remove from an empty vector");
    }
    DataType* new_values = new DataType[size - 1];
    for (int i = 0; i < size; i++) {
        if(i < index){
            new_values[i] = values[i];
        }else if(i > index){
            new_values[i-1] = values[i];
        }
    }

    delete[] values;
    values = new_values;
    size--;
}


template <typename DataType>
int Gvec<DataType>::length() const {
    return size;
}

template <typename DataType>
bool Gvec<DataType>::isEmpty() const {
    return size==0;
}

template <typename DataType>
DataType Gvec<DataType>::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return values[index];
}

template <typename DataType>
DataType& Gvec<DataType>::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return values[index];
}

template <typename DataType>
const DataType& Gvec<DataType>::operator[](int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return values[index];
}