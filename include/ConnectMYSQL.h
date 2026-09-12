#ifndef CONNECTMYSQL_H
#define CONNECTMYSQL_H

#include <iostream>
#include <string>   
#include <mysql.h>

bool CommandMYSQL(const std::string& comando){
    MYSQL *connect = mysql_init(NULL);
    !connect ?  std::cout<<"erro ao iniciar a conexão com o banco de dados\n" : 
                std::cout<<"conexão iniciada com sucesso\n";

    // std::cout<<"criando real conecão \n";
    if(!mysql_real_connect(connect, "localhost", "root", "1234", "biblioteca", 3306, NULL, 0)){
        std::cout<<"erro ao conectar com o banco de dados\n";
        std::cout<<mysql_error(connect)<<"\n";
        return false;
    }
    // tentar registrar um cliente no banco de dados
    if (mysql_query(connect, comando.c_str()) != 0) {
        std::cerr << "Erro ao executar o comando: " << mysql_error(connect) << std::endl;
        return false;
    } else {
        std::cout << "Comando executado com sucesso!\n";
    }
    mysql_close(connect);
    return true;
}

#endif