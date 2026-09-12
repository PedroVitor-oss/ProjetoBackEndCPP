#include <iostream>
#include <clocale>
#include <functional>
#include <map>
#include "include/Login.h"

void NovoCliente() {
    std::cout << "Função para criar um novo cliente." << std::endl;
    // Implementação da função para criar um novo cliente
}

int main(){
    //configuração de arquivos data
    std::setlocale(LC_ALL, "Portuguese");
    if(Login()){
        std::map<int, std::function<void()>> actions = {
            {1,NovoCliente},
        };

        //tela de home
        std::cout<<"===== TELA DE HOME =====\n";
        std::cout<<"Ações para cliente      \n";
        std::cout<<"1- novo cliente         \n";
        std::cout<<"2- editar cliente       \n";
        std::cout<<"3- remover cliente      \n";
        std::cout<<"Ações para empréstimos  \n";
        std::cout<<"4- novo emprestimo      \n";
        std::cout<<"5- estatos do emprestimo\n";
        std::cout<<"6- registrar devolução  \n";
        std::cout<<"Ações para livros       \n";
        std::cout<<"7- novo livro           \n";
        std::cout<<"8- editar livro         \n";
        std::cout<<"9- remover livro        \n";
        std::cout<<"Ações do sistema        \n";
        std::cout<<"10- trocar senha        \n";
        std::cout<<"selecione oque qer fazer: ";
        int opcao;
        std::cin>>opcao;    
        
        auto action = actions.find(opcao);
        if (action != actions.end()) {
            action->second(); // Chama a função correspondente à opção selecionada
        } else {
            std::cout << "Opção inválida." << std::endl;
        }
        

    }
    else{
        std::cout<<"erro ao logar\n";
    }

    return 0;
}
