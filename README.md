
# How to use

void push(value)          -> pushes given value on top<br>
void pop()                -> pops last index<br>
void insert(value, index) -> inserts value to given index shifting the stack above<br>
void removeAt(index)      -> removes given index<br>
DataType get(index)       -> gets value of given index (Foo[index] also works)<br>
int length()              -> returns length of the vector<br>
bool isEmpty()            -> returns if vector is empty<br>


    #include "gvec.h"

    int main(){

        Gvec<int> Foo;
        Foo.push(1); //adds index 0 of value 1
        Foo.push(2); //adds index 1 of value 2
        Foo.push(3); //adds index 2 of value 3

        Foo.pop(); //removes last index

        std::cout<<Foo.length()<<"\n"; //prints out Foo's length
        std::cout<<Foo.get(0)<<"\n"; //prints value of index 0
        std::cout<<Foo[1]<<"\n"; //prints value of index 1

        return 0;
    }
