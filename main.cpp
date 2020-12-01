#include <iostream>
#include "Node.h"
#include "Stack.h"
#include <string>
#include <fstream>
#include "Stack.cpp"

using namespace std;

bool isExpresionValid( std::string expression ){

    auto* stack = new Stack<int>();

    for( int i = 0 ; i < expression.length() ; i++ ){
        if( expression.at(i) == '('){
            stack->push( i );
            cout<<expression.at(i)<<endl;
        }else if( expression.at( i ) == ')' ){
            if( !stack->isEmpty()){
                cout<<expression.at(i)<<endl;
                stack->pop();
            }else{
                return false;
            }
        }
    }
    return stack->isEmpty();

}

//std::string showMatch( std::string expression ){
//    //()/() [0-1],[3-4]
//    //(34+(23-7)+(23-3)) [0-17],[4-9],[...]
//}

int main() {
    std::string input;
    ifstream fe("input.dat");

//    stack->push(45);
//    stack->push(32);
//    stack->push(17);
//    stack->push(53);

    //while( !stack->isEmpty()){
    // cout<<stack->pop()<<endl;
    //}

    while(!fe.eof()){
        getline(cin,input);
        if( !input.empty()){
            if( isExpresionValid( input ) ){
                cout<<input<<" ES VALIDA"<<endl;
            }else{
                cout<<input<<" NO ES VALIDA"<<endl;
            }
        }else{
            break;
        }
    }

    return 0;
}
