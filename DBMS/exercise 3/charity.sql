-- a) Display all first names
-- b) Display all last names of people of Mumbai city
-- c) Display Person Id along with his/her name
-- d) Display first name concatenated with last name for all the employees.
-- e) Display address along with Person Id.
-- f) Display City and Person Id.
-- g) Display Last Names and First names of people who have "at" in their first names.
-- h) Display Last Name having 'a' in Last name.
-- i) Display Last Name and First name of people who have "a" as the last character in their
--  First names.



CREATE TABLE charity1 (P_ID INT PRIMARY KEY, LastName VARCHAR(10), FirstName VARCHAR(10), Address VARCHAR(10), City VARCHAR(10), Contribution FLOAT);

ALTER TABLE charity1 MODIFY COLUMN Address VARCHAR(20);


INSERT INTO charity1 VALUES (1, "Bindra", "Jaspreet", "5B, Gomti ", "Lucknow", 3500.50); 
INSERT INTO charity1 VALUES (2, "Rana", "Monica", "21A,Bandra", "Mumbai", 2768.00); 
INSERT INTO charity1 VALUES (3, "Singh", "Jatinder", "8B,Punjab", "Delhi", 2000.50); 
INSERT INTO charity1 VALUES (4, "Arora", "Satinder", "K/1,Shree", "Mumbai", 1900.00); 
INSERT INTO charity1 VALUES (5, "Krishna", "Vineeta", "A-75, Adarsh ", "", null); 

-- a
SELECT FirstName FROM charity1;

-- b
SELECT FirstName, LastName FROM charity1 WHERE City = "Mumbai";

-- c
SELECT P_ID, FirstName, LastName FROM charity1;

-- d
SELECT CONCAT(FirstName, LastName) FROM charity1;

-- e
SELECT ADDRESS, P_ID FROM charity1;

-- f
SELECT City, P_ID FROM charity1;

-- g
SELECT LastName, FirstName FROM charity1 WHERE FirstName LIKE "%at%";

-- h
SELECT LASTNAME FROM charity1 WHERE LASTNAME LIKE "%a%";

-- i
SELECT LASTNAME, FIRSTNAME FROM charity1 WHERE FIRSTNAME LIKE "%a";