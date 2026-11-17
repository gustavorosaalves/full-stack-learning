CREATE DATABASE carros;

USE carros;

CREATE TABLE marcas (
    id_marcas INT NOT NULL AUTO_INCREMENT,
    nome_marca VARCHAR(255) NOT NULL,
    PRIMARY KEY (id_marcas)
);

ALTER TABLE marcas ADD origem VARCHAR(255);

CREATE TABLE inventario (
    id INT NOT NULL AUTO_INCREMENT,
    modelo VARCHAR(255) NOT NULL,
    transmissao VARCHAR(255) NOT NULL,
    motor VARCHAR(255) NOT NULL,
    combustivel VARCHAR(255) NOT NULL,
    marcas_id INT NOT NULL,
    PRIMARY KEY (id),
    FOREIGN KEY (marcas_id) REFERENCES marcas(id_marcas)
);

CREATE TABLE clientes (
    id INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    sobrenome VARCHAR(255) NOT NULL,
    endereco VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

INSERT INTO clientes (nome, sobrenome, endereco)
VALUES
    ("Gustavo", "Rosa", "Rua Pernambuco"),
    ("Robson", "Silva", "Rua Aquario"),
    ("Cloves", "Alves", "Rua Peixes");

INSERT INTO marcas (nome_marca, origem)
VALUES
    ("BMW", "Alemanha"),
    ("Fiat", "Italia"),
    ("Jaguar", "Inglaterra");

INSERT INTO inventario (modelo, transmissao, motor, combustivel, marcas_id)
VALUES
    ("BMW", "Automática", "2.0", "Gasolina", 1),
    ("Fiat", "Manual", "1.0", "Gasolina", 2),
    ("Jaguar", "Automático", "4.0", "Energia", 3);




CREATE USER ana IDENTIFIED BY "1212";
CREATE USER joão@localhost IDENTIFIED BY "1212";
CREATE USER priscila@andreiacono.com IDENTIFIED BY "123";
SELECT * FROM mysql.user

DROP USER priscila@andreiacono.com; -- caso seja demitida da empresa por exemplo!

SET PASSWORD FOR joão = "3322"; -- caso o usuário esqueça a senha!

SHOW GRANTS FOR ana; -- verificar o que o usuário tem acesso!

GRANT SELECT, INSERT, UPDATE, DELETE 
ON (nome do banco de dados.*) TO ana; -- o que deixar o usuário ter acesso!

GRANT ALL ON (nome do banco de dados.*) TO ana; -- ter acesso total, virar um ADMIN de um banco específico!    
GRANT ALL ON *.* TO joão@localhost; -- ter acesso total, virar um ADMIN de todos os bancos de dados!    

CREATE USER priscila IDENTIFIED BY "1212";
SHOW GRANTS FOR priscila;

GRANT SELECT, INSERT, UPDATE 
ON (nome do banco de dados .*) to priscila;

REVOKE UPDATE
ON (nome do banco de dados .*) FROM priscila; -- removendo o acesso do usuário!


