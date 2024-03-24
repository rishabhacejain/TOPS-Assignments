CREATE TABLE item_mast(PRO_ID INT, 
PRO_NAME VARCHAR(20), PRO_PRICE FLOAT, PRO_COM INT);

INSERT INTO item_mast
VALUES
(101,	"Mother Board",	3200.00,	15),
(102,	"Key Board",	450.00,	  16),
(103,	"ZIP drive",	250.00,	14),
(104,	"Speaker",	    550.00,	16),
(105,	"Monitor",     5000.00,	11),
(106,	"DVD drive",	900.00,	12),
(107,	"CD drive",	    800.00,	12),
(108,	"Printer",	    2600.00,	13),
(109,	"Refill cartridge",	350.00,	13),
(110,	"Mouse",	250.00,	12);

SELECT PRO_ID, PRO_NAME, PRO_PRICE,PRO_COM FROM item_mast  -- Question 20
WHERE PRO_PRICE BETWEEN 200 AND 600; 

SELECT AVG(PRO_PRICE) AS AVERAGE_PRICE    -- Question 21
FROM item_mast
WHERE PRO_COM = 16;


SELECT PRO_NAME AS "Item Name",PRO_PRICE AS "Price (in RS)" -- Question 22
FROM item_mast;

-- end

SELECT PRO_NAME, PRO_PRICE  -- question 23
FROM item_mast
WHERE PRO_PRICE >= 250
ORDER BY PRO_PRICE ASC;

SELECT PRO_NAME, PRO_PRICE
FROM item_mast
WHERE PRO_PRICE >= 250
ORDER BY PRO_NAME DESC;

-- end

SELECT PRO_COM AS "CompanY Code",AVG(PRO_PRICE) AS "Average Price"
FROM item_mast
GROUP BY PRO_COM;  -- Question 24






