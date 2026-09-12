#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include "include/Login.h"


int main(){
    //configuração de arquivos data
    
    if(Login()){
        //tela de home
        std::cout<<"tela de home\n";
    }
    else{
        std::cout<<"erro ao logar\n";
    }

    return 0;
}
