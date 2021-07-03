Create Database interview6;

CREATE TABLE Student6
(
Id int ,
Name varchar(50) NOT NULL,
Marks int
)
Insert into Student6(Id,name,marks) values
(1,'Ashley',81),
(2,'Samantha',75),
(4,'Julia',76),
(3,'Belvet',84)

Select Name from Student6
where marks >(Select min(marks) from Student6);

SELECT NAME FROM Student6 WHERE Marks > (Select min(marks) from Student6) ORDER BY RIGHT(NAME, 3), ID ASC;

Drop table Student6;