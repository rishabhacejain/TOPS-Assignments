USE assignment;
CREATE TABLE Salesperson(SNo INT PRIMARY KEY, SNAME VARCHAR(30),CITY VARCHAR(20),COMM FLOAT);
INSERT INTO Salesperson
VALUES
(1001,"Peel","London",.12),
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axelrod","New York",.1);

SELECT * FROM Salesperson;


CREATE TABLE CUSTOMER(
CNum INT PRIMARY KEY, CNAME VARCHAR(30),City VARCHAR(30),
Rating INT,Sno INT,FOREIGN KEY(Sno) REFERENCES Salesperson(Sno));

INSERT INTO CUSTOMER
VALUES
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);

SELECT * FROM CUSTOMER;

SELECT SName,Comm FROM Salesperson
WHERE City = 'london' and COMM >.12;

SELECT SName,City FROM Salesperson
WHERE City = 'Barcelona' or City = 'London';

SELECT SName, Comm FROM Salesperson
WHERE COMM > 0.10 AND COMM < 0.12;

SELECT CNAme, Rating,City FROM CUSTOMER
WHERE (rating > 100 OR city = 'Roe');

















