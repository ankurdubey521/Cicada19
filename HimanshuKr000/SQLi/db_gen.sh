service mysql start && mysql -uroot -e "CREATE DATABASE SqliDB; CREATE USER 'sqli-user'@'localhost' IDENTIFIED BY 'starklovesburgers'; GRANT ALL PRIVILEGES ON SqliDB.* TO 'sqli-user'@'localhost'; USE SqliDB; CREATE TABLE login (User varchar(20), Password varchar(100)); INSERT INTO login (User,Password) VALUES ('admin', 'doyouknowme'); INSERT INTO login (User,Password) VALUES ('iamironman', 'password'); SET PASSWORD FOR root@'localhost' = PASSWORD('edith')";

apache2 -D FOREGROUND
