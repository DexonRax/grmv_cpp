
# How to use


    #include "grmv.h"

    int main(){

        Grmv<int> Foo;
        Foo.push(1); //adds index 0 of value 1
        Foo.push(2); //adds index 1 of value 2
        Foo.push(3); //adds index 2 of value 3

        Foo.pop(); //removes last index

        std::cout<<Foo.length()<<"\n"; //prints out Foo's length
        std::cout<<Foo.get(0)<<"\n"; //prints value of index 0
        std::cout<<Foo[1]<<"\n"; //prints value of index 1

        return 0;
    }
