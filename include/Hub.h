#ifndef HUB_H
#define HUB_H

#include <iostream>
#include <map>
#include <functional>
#include "ClienteManage.h"
struct Action {
    std::string description;
    std::function<void()> function;
};

std::map<int, Action> actions = {
    {1,{"novo cliente", CadastroNovoCliente}

    }
};

void Hub(){
    /*
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
    */
    for (const auto& [key, action] : actions) {
        std::cout << key << " - " << action.description << "\n";
    }
    std::cout << "Selecione uma ação: ";
    int opcao;
    std::cin >> opcao;
    auto action = actions.find(opcao);
    if (action != actions.end()) {
        action->second.function();
    } else {
        std::cout << "Opção inválida." << std::endl;
    }
}

#endif // HUB_H