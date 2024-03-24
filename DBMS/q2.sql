USE assignment;
CREATE TABLE Employee
(Employee_id INT, First_name VARCHAR(30), Last_name VARCHAR(20), 
Salary INT, Joining_date VARCHAR(30), Department VARCHAR(30));

INSERT INTO Employee 
VALUES
(1,"John","Abraham",1000000,"01-JAN-13 12:00:00 AM","Banking"),
(2,"Michael","Clarke",800000,"01-JAN-13 12:00:00 AM","Insurance"),
(3,"Roy","Thomas",700000,"01-FEB-13 12:00:00 AM","Banking"),
(4,"Tom","Jose",600000,"01-FEB-13 12:00:00 AM","Insurance"),
(5,"Jerry","Pinto",650000,"01-FEB-13 12:00:00 AM","Insurance"),
(6,"Philip","Mathew",750000,"01-JAN-13 12:00:00 AM","Services"),
(7,"TestName1","123",650000,"01-JAN-13 12:00:00 AM","Services"),
(8,"TestName2","Lname%",600000,"01-FEB-13 12:00:00 AM","Insurance");

ALTER TABLE Employee
ADD FOREIGN KEY(Employee_id) REFERENCES Student(Employee);
SELECT * FROM Exam;



SELECT * FROM Employee;

CREATE TABLE Incentive(Employee_ref_id INT,Incentive_date VARCHAR(30),Incentive_amount INT);

INSERT INTO INcentive 
VALUES
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(1,"01-JAN-13",4500),
(2,"01-JAN-13",3500);

SELECT * FROM Incentive;

SELECT First_name FROM Employee;
ALTER TABLE Employee
RENAME COLUMN First_name to Employee_Name;
ALTER TABLE Employee
RENAME COLUMN Employee_Name to First_name;

SELECT First_name,Joining_date,Salary FROM Employee;

SELECT * FROM Employee   -- Question number 5
ORDER BY First_name ASC;

SELECT * FROM Employee   -- Question number 5
ORDER BY Salary DESC;
-- end

SELECT * FROM Employee    -- Question number 6
WHERE First_name LIKE '%J%';
-- end

SELECT Department, MAX(Salary) AS Maximum_salary   -- Question Number 7
FROM Employee
GROUP BY Department ;

SELECT Employee.First_name, Incentive.incentive_amount FROM Employee
INNER JOIN Incentive ON
Employee.Employee_id=Incentive.Employee_ref_id
where incentive_amount > 3000; -- Question Number 9

 CREATE TABLE view_table(id INT, message VARCHAR (50));
DELIMITER //
CREATE TRIGGER T1
AFTER INSERT
ON Employee for each row
BEGIN
     IF new.DEPARTMENT is NULL then
     INSERT INTO VIEW(id,message)
     VALUES(new.id, concat('Hi',Employee_id,'Please Enter The Department'));
     END IF;
     
END;
     //
	
INSERT INTO Employee 
VALUES
(1,"John","Abraham",1000000,"01-JAN-13 12:00:00 AM",'Null');

view_table
     
     


















