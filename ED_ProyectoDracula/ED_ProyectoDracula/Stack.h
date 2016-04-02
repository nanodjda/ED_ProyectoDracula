#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define defaultSize 2048
#include <stdexcept>




#endif // STACK_H_INCLUDED

template <typename E>
class AStack{
    private:
        int maxSize;
        int top;
        E *ListArray; //puntero a arreglo

    public:
    AStack(int size = defaultSize){
        maxSize = size;
        top = 0;
        ListArray = new E[size];
    }

    ~AStack() {delete [] ListArray;}

    void clear(){top = 0;}

    void push(E pElement)throw(runtime_error){
        if(top == maxSize){
            throw runtime_error("Stack full");
        }
        ListArray[top++] = pElement;
    }

    E pop()throw(runtime_error){
        if(top == 0){
            throw runtime_error("Stack empty");
        }
        return ListArray[--top]; //retorna top y despues lo decrementa
    }

    E topValue() throw(runtime_error){
        if (top == 0){
            throw runtime_error("Stack empty");
        }
        return ListArray[top-1];
    }

    int length(){
        return top; //larog de pila
    }

};
