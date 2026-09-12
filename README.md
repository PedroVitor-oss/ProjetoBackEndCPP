# ProjetoBackEndC++

> Sistema de gerenciamento biblioteca digital desenvolvido em C++ para aplicar, de forma progressiva, fundamentos de programação, organização de dados e conceitos relacionados ao desenvolvimento back-end.

![C++](https://img.shields.io/badge/linguagem-C++-00599C?logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/compilador-GCC-A42E2B?logo=gnu&logoColor=white)
![Status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)

## Sobre o projeto

O **ProjetoBackEndC++** é um projeto pessoal de aprendizado construído desde os fundamentos da linguagem C++. A proposta é desenvolver um sistema de gerenciamento de uma biblioteca digital executado no terminal e expandi-lo gradualmente conforme novos conceitos forem estudados.

Além de praticar a linguagem, o projeto busca construir uma base para estudos futuros de back-end e bancos de dados, trabalhando com modelagem de informações, regras de negócio, organização do código e persistência de dados.

O sistema está em uma fase inicial e acompanha meu aprendizado. Por isso, novas funcionalidades e refatorações serão adicionadas progressivamente.

## Escopo do sistema

O projeto foi organizado em quatro áreas principais:

- **Produtos:** cadastro, consulta, alteração e remoção;
- **Estoque:** acompanhamento e atualização das quantidades disponíveis;
- **Pedidos:** criação e gerenciamento de pedidos;
- **Relatórios:** apresentação de informações importantes do sistema.
O projeto foi organizado em quatro áreas principais:

- **Clientes**: cadastro, consulta, alteração e remoção de usuários da biblioteca;
- **Livros**: cadastro, consulta, alteração e remoção do acervo;
- **Empréstimos**: registro de retiradas, acompanhamento de status e devoluções;
- **Sistema**: autenticação, troca de senha e relatórios gerais.

## Estado atual

Nesta primeira etapa, o projeto possui:

- Tela de login executado no terminal;
- Hub de ações basicas;
- Cadastro de clientes no banco de dados;


## Objetivos de aprendizado

O desenvolvimento deste projeto envolve o estudo e a aplicação de:

- estruturas e classes (`structs`, `class`);
- ponteiros e gerenciamento de memória;
- vetores e alocação dinâmica;
- funções e separação de responsabilidades;
- validação de entradas;
- manipulação de arquivos;
- persistência de dados;
- bancos de dados relacionais;


## Roadmap


## 🎯 Fase 1 — Estrutura base
- [X] Criar `Login.h` com autenticação
- [x] Criar o menu principal no terminal
- [x] Criar `Hub.h` com menu via `std::map<int, Action>`
- [x] Definir a estrutura inicial de cliente, livro e empréstimo
- [x] Configurar conexão com MySQL (`ConnectMySQL.h`)
- [x] Criar tabelas: `clientes`, `livros`, `emprestimos`, `usuarios`
- [x] Implementar operações iniciais de cadastro 
- [ ] Permitir o alteração de  registros
- [ ] Implementar remoção de registros

## 👤 Fase 2 — Clientes
- [ ] Listar todos os clientes
- [ ] Buscar cliente por nome ou mail
- [ ] Impedir remoção de cliente com empréstimo ativo

## 📚 Fase 3 — Livros
- [ ] Criar `LivroManage.h` com CRUD completo
- [ ] Registrar título, autor, editora e quantidade
- [ ] Listar acervo completo
- [ ] Buscar livro por título ou autor 
- [ ] Controle de quantidade em estoque

## 🔄 Fase 4 — Empréstimos
- [ ] Criar `EmprestimoManage.h`
- [ ] Registrar novo empréstimo
- [ ] Calcular data prevista de devolução
- [ ] Consultar status do empréstimo
- [ ] Registrar devolução e calcular multa
- [ ] Bloquear empréstimo sem exemplares disponíveis

## ⚙️ Fase 5 — Sistema e Autenticação
- [ ] Implementar troca de senha
- [ ] Diferenciar perfis (admin / atendente)

## 📊 Fase 6 — Relatórios
- [ ] Criar `Relatorio.h`
- [ ] Livros mais emprestados
- [ ] Clientes com empréstimos em atraso
- [ ] Total de livros disponíveis e emprestados
- [ ] Histórico de empréstimos por período


## 🗄️ Fase 8 — Banco de Dados
- [ ] Usar prepared statements (evitar SQL Injection)
- [ ] Tratar erros de conexão e reconexão

## 🚀 Fase 9 — Melhorias
- [ ] Interface mais amigável no terminal
- [ ] Validação robusta de entradas
- [ ] Sistema de logs
- [ ] Backup automático
- [ ] Testes unitários
- [ ] Documentação (README + comentários)


O roadmap representa a direção atual do projeto e pode mudar conforme o aprendizado avança.

## Tecnologias e ferramentas

| Tecnologia | Utilização |
| --- | --- |
| C++ | Desenvolvimento do sistema e das regras de negócio |
| GCC | Compilação e avisos de diagnóstico |
| Visual Studio Code | Ambiente de desenvolvimento |
| Git e GitHub | Versionamento e registro da evolução |
| Windows | Ambiente principal de desenvolvimento |

## Como executar


### Pelo terminal

Com o GCC e MYSQL instalado, execute os comandos

#### Banco de dados
```
CREATE DATABASE biblioteca;

USE biblioteca;

CREATE TABLE clientes (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) DEFAULT "default@mail.com"
);
```
#### O projeto em sí
Na pasta do projeto pode usar o arquivo compiler.bat para compilar, so se atente no local das pastas MySQL\MySQL Server 8.0\include e MySQL\MySQL Server 8.0\lib.
```bash
start compiler.bar
ou
g++ main.cpp -Iinclude -I"C:\Program Files\MySQL\MySQL Server 8.0\include" -L"C:\Program Files\MySQL\MySQL Server 8.0\lib" -lmysql -lws2_32 -ladvapi32 -lcrypt32 -lshlwapi -luser32 -lkernel32 -o main.exe

./main
```

## Estrutura atual

```text
ProjetoBackEndC/

├─── data
|    └─── security.txt
├─── include
|    ├─── ClienteManage.h
|    ├─── ConnectMYSQL.h
|    ├─── Hub.h
|    └─── Login.h
├──── sql
|    └─── confg.sql
├──── .gitignore
├──── compiler.bat
├──── libmysql.dll
├──── main.cpp    
└──── README.md

```

Essa estrutura será reorganizada conforme o programa for almentando.

## Metodologia de desenvolvimento

O projeto é desenvolvido de maneira incremental: cada conceito é estudado, aplicado e revisado antes da próxima etapa. O objetivo não é apenas concluir o sistema, mas compreender as decisões e os fundamentos utilizados em sua construção.

## Autor

Desenvolvido por [Pedro Vitor Ferreira dos Santos](https://github.com/PedroVitor-oss), estudante de Analise e Desenvolvimento de Sistemas com interesse em desenvolvimento back-end e bancos de dados.