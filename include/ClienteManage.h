#ifndef CLIENTEMANAGE_H   
#define CLIENTEMANAGE_H

#include <iostream>
#include <string>
#include <mysql.h>


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
void connetctMYSQL(){
    std::cout<<"conectando com o banco de dados...\n"; 
    MYSQL *connect = mysql_init(NULL);
    !connect ?  std::cout<<"erro ao iniciar a conexão com o banco de dados\n" : 
                std::cout<<"conexão iniciada com sucesso\n";
    mysql_close(connect);

}
bool RegistreNovoCliente(const std::string& nome, const std::string& email){
    //conectar com o banco de dados
    std::cout<<"conectando com o banco de dados...\n"; 
    MYSQL *connect = mysql_init(NULL);
    !connect ?  std::cout<<"erro ao iniciar a conexão com o banco de dados\n" : 
                std::cout<<"conexão iniciada com sucesso\n";
    mysql_close(connect);

    //inserir o cliente no banco de dados
    //retornar true se sucesso, false se falha
    return true;
}

#endif // CLIENTEMANAGE_H