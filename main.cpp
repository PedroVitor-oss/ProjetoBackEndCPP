#include <iostream>
#include <clocale>
#include <functional>
#include <map>
#include "include/Login.h"
#include "include/Hub.h"



int main(){
    //configuração de arquivos data
    std::setlocale(LC_ALL, "Portuguese");
    if(Login()){
        Hub();

    }
    else{
        std::cout<<"erro ao logar\n";
    }

    return 0;
}
