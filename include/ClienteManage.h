#ifndef CLIENTEMANAGE_H   
#define CLIENTEMANAGE_H

#include <iostream>
#include <string>

// vamos fazer a conexão com o banco de dados para gerenciar os clientes
void CadastroNovoCliente();
bool RegistreNovoCliente(const std::string& nome, const std::string& email);



void CadastroNovoCliente(){
    std::cout<<"===== CADASTRO DE NOVO CLIENTE =====\n";
    std::cout<<"Digite o nome do cliente: ";
    std::string nome;
    getline(std::cin >> std::ws, nome); // Use getline to read the full name including spaces
    // std::cin>>nome;
    std::cout<<"Digite o email do cliente: ";
    std::string email;
    std::cin>>email;

    RegistreNovoCliente(nome, email);
    
}
bool RegistreNovoCliente(const std::string& nome, const std::string& email){
    //conectar com o banco de dados
    //inserir o cliente no banco de dados
    //retornar true se sucesso, false se falha
    return true;
}

#endif // CLIENTEMANAGE_H