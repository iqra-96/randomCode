
#include<iostream>
using namespace std;

class MyStack{
private:
    int Stack[10], top, size;
public:
    MyStack(int size){
        this->size = size;
        top = 0;
    }
    bool isEmpty(){
        if(top == 0){ return true; }
        else{ return false; }
    }
    bool isFull(){
        if(top == size){ return true; }
        else{ return false; }
    }
    bool push(int element){
        if( isFull() == true ){
            cout<<"Stack is full! Can not push."<<endl;
            return false;
        }
        Stack[top++] = element;
        return true;
    }
    bool pop(){
        if(isEmpty() == true){
            cout<<"Stack is empty! Can not pop."<<endl;
            return false;
        }
        top--; return true;
    }
    int topElement(){
        return Stack[top-1];
    }
    void show(){
        if(isEmpty() == true){
            cout<<"Stack is empty! No elements show."<<endl;
        }else{
            cout<<"Stack elements: ";
            for(int i=top-1; i>=0; i--){
                cout<<Stack[i]<<" ";
            }cout<<endl;
        }
    }
};

int main(){
    MyStack st(100);
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);


    st.show();

    st.pop();
    st.show();
    int element = st.topElement();
    cout<<"Top element: "<<element<<endl;
     st.push(70);
    st.push(90);
    st.push(80);
    st.push(40);
    st.pop();
    st.show();

    cout<<"Top element: "<<element<<endl;
}
