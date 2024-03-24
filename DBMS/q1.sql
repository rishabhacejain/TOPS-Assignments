CREATE DATABASE assignment;
USE assignment;
CREATE TABLE Student(roll_no INT PRIMARY KEY, Name VARCHAR(50), Branch VARCHAR(50));
INSERT INTO Student VALUES (1,"Jay","Computer Science"),(2,"Suhani","Electronic and Com"),(3,"Kriti","Electronic and Com");
SELECT * FROM student;  

CREATE TABLE Exam(roll_no INT, S_code VARCHAR(10),Marks INT, P_code VARCHAR(5));
INSERT INTO Exam
 VALUES
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");

ALTER TABLE Exam
ADD FOREIGN KEY(roll_no) REFERENCES Student(roll_no);
SELECT * FROM Exam;