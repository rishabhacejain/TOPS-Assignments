CREATE TABLE orders(ord_no INT PRIMARY KEY,
purch_amt FLOAT NOT NULL DEFAULT 0,
ord_date DATE NOT NULL,
customer_id INT NOT NULL,saleman_id INT NOT NULL);

INSERT INTO orders
VALUES
(70001,150.2,"2012-10-05",3005,5002);

SELECT ord_no,ord_date,purch_amount FROM orders
WHERE salesman_id = 5001;

