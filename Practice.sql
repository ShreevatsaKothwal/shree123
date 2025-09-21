CREATE DATABASE school;
USE school;



CREATE TABLE student(
	rollno INT PRIMARY KEY,
    name VARCHAR(50),
    marks INT NOT NULL,
    grade VARCHAR(1),
    city VARCHAR(20)
);


INSERT INTO student
(rollno , name , marks , grade , city)
VALUES
(101 , "anil" , 78 , "C" , "Pune"),
(102 , "bhumika" , 93 , "A" , "Mumbai"),
(103 , "chetan" , 85 , "B" , "Mumbai"),
(104 , "emanuel" , 12 , "F" ,"Delhi"),
(105 , "farah" , 82 ,"B" , "Delhi");



SELECT * FROM student;


SELECT DISTINCT city FROM student;

SELECT * FROM student
WHERE marks>80;


SELECT * FROM student
WHERE city="mumbai";


SELECT * FROM student
WHERE marks+10>100;

SELECT * FROM student
WHERE marks>80 AND city="mumbai";

SELECT * FROM student 
WHERE marks>90 OR city="Mumbai";

SELECT * FROM student 
WHERE marks BETWEEN 80 AND 90;

SELECT * FROM student 
WHERE city IN ("Delhi" , "Mumbai" , "TN");


SELECT * FROM student 
WHERE city NOT IN ("Delhi" , "Mumbai" , "TN");

SELECT * FROM student
WHERE marks>80
LIMIT 2;

SELECT * FROM student
ORDER BY city ASC;

SELECT * FROM student
ORDER BY marks DESC
LIMIT 3;

SELECT MAX(marks) FROM student;

SELECT MIN(marks) FROM student;

SELECT AVG(marks) FROM student;

SELECT COUNT(rollno) FROM student;

SELECT city,count(rollno) FROM student 
GROUP BY city;

SELECT city , AVG(marks) FROM student 
GROUP BY city
ORDER BY city ;



SET SQL_SAFE_UPDATES = 0;

UPDATE student 
SET grade ="O"
WHERE grade ="A";


SELECT * FROM student;

UPDATE student 
SET marks = 82
WHERE rollno = 104;

UPDATE student 
SET grade = "B"
WHERE marks BETWEEN 80 AND 90;

UPDATE student 
SET grade ="A"
WHERE marks >90;


UPDATE student 
SET marks = marks +1;

UPDATE student 
SET marks = 12
WHERE rollno = 104;

UPDATE student 
SET grade = "F"
WHERE marks <20;

DELETE FROM student 
WHERE marks <33;



















