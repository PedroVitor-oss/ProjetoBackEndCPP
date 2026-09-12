#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

std::string getHashedPasswordByFile(){
    std::fstream file("data/security.txt", std::ios::in);
    std::string hashedPassword;
    std::getline(file, hashedPassword);
    file.close();
    return hashedPassword;
}
std::string hashPassword(const std::string& password){
     std::string binario;
    for (unsigned char c : password) {
        // Converte o caractere para binário de 8 bits
        binario += std::bitset<8>(c).to_string();
    }
    return binario;
}

bool Login(){

    //sistema de senha
    //=====primeiro acesso definir senha====
    //verificar se possui um hasg salvo 
    std::string hashedPassword = getHashedPasswordByFile();
    if(hashedPassword.empty()){
        std::string password;
        std::string passwordConfirm = "";

        std::cout<<"====== BIBLIOTECA SYSTEM ======\n";
        std::cout<<"bem vindo ao biiblioteca system\n";
        std::cout<<"como é seu primeiro acesso     \n";
        std::cout<<"defina um senha de acesso      \n";
        std::cout<<"nova senha: ";
        std::cin>> password;
        do{
            if(!passwordConfirm.empty()){
                std::cout<<"senha não confere, tente novamente\n";
            }
            std::cout<<"confirmar senha:  ";
            std::cin>> passwordConfirm;
        }while(password != passwordConfirm);

        //criar hash
         hashedPassword = hashPassword(password);

        //salavar hash em arquivo
        std::fstream file("data/security.txt", std::ios::out);
        file << hashedPassword;
        file.close();

        //passar para tela de home 
        std::cout<<"acesso liberado, bem vindo!\n";
        return true;

    }else{//de resto pedir para entrar com senha 
        std::string password;
        std::cout<<"====== BIBLIOTECA SYSTEM ======\n";
        std::cout<<"bem vindo ao biiblioteca system\n";
        std::cout<<"entre com sua senha: ";
        std::cin>> password;
        //check password
        if(hashPassword(password) != hashedPassword){
            std::cout<<"senha incorreta, acesso negado\n";
            return false;
        }
        std::cout<<"senha correta, acesso liberado\n";
        return true;
    }
    return false;
}
#endif // LOGIN_H