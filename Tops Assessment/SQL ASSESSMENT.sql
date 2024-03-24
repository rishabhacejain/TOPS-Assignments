USE assignment;

CREATE TABLE product(PRO_ID INT, 
PRO_NAME VARCHAR(20), PRO_PRICE FLOAT, PRO_COM INT);

INSERT INTO product
VALUES
(101,	"Mother Board",	 		3200.00,    	15),
(102,	"Key Board",	 		450.00,	        16),
(103,	"ZIP drive",			250.00,	        14),
(104,	"Speaker",	  			550.00,	        16),
(105,	"Monitor",   		    5000.00,	    11),
(106,	"DVD drive",		 	900.00,	        12),
(107,	"CD drive",	   			800.00,	        12),
(108,	"Printer",	            2600.00,	    13),
(109,	"Refill cartridge", 	350.00,	        13),
(110,	"Mouse",	            250.00,     	12);

SELECT * FROM product;

SELECT PRO_NAME, PRO_PRICE  
FROM product
WHERE PRO_PRICE >= 250;

SELECT (PRO_PRICE),PRO_NAME
FROM product
WHERE PRO_PRICE = (SELECT MIN(PRO_PRICE) FROM product);

SELECT PRO_COM, AVG(PRO_PRICE)
FROM product
GROUP BY PRO_COM;

SELECT AVG(PRO_PRICE) AS AVERAGE
FROM product;



