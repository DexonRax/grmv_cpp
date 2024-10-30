template <typename DataType>
Grmv<DataType>::Grmv() : values(nullptr), size(0) {}

// Destructor
template <typename DataType>
Grmv<DataType>::~Grmv() {
    delete[] values;
}

template <typename DataType>
void Grmv<DataType>::push(DataType val) {
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
void Grmv<DataType>::pop() {
    if (size == 0) {
        throw std::out_of_range("Cannot pop from an empty container");
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
int Grmv<DataType>::length() const {
    return size;
}

template <typename DataType>
DataType Grmv<DataType>::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return values[index];
}

template <typename DataType>
DataType& Grmv<DataType>::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return values[index];
}

template <typename DataType>
const DataType& Grmv<DataType>::operator[](int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return values[index];
}