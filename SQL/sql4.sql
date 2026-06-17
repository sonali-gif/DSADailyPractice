use college;
drop table student;
create table student(
roll int primary key,
name varchar(50),
marks int not null,
grade varchar(40),
city varchar(30)
);

insert into student values (101, "anil",78,"C","Pune");
insert into student values (102, "bhumika",93,"A","Mumbai");
insert into student values (103, "chetan",85,"B","Mumbai");
insert into student values (104, "dhruv",96,"A","Delhi");
insert into student values (105, "emaneual",12,"F","Delhi");
insert into student values (106, "farah",82,"B","Delhi");

-- to retrieve full table
 select * from student;
 
 -- to retrieve specific columns
 select name,grade from student;
 select name,grade from student where city="Delhi";
 
-- distinct keyword give unique element of column
 select distinct city from student;
 
 -- where clause 
 select * from student 
 where marks> 90;
 
 select name ,city from student 
 where (marks> 80 && marks<90);
 
 select * from student 
 where marks> 90 and city ="mumbai";
 
 SELECT * FROM student
WHERE marks <> 96; -- this also means not equal to like !=

select * from student 
where name like '%r%'; -- return any name which have r in between

select * from student 
where marks between 80 and 100; -- between

select * from student
where city in ("delhi","mumbai"); -- in

select * from student
where city not in ("delhi","mumbai"); -- not in

select * from student 
limit 4; -- limit clause

select * from student 
where marks<80
limit 2; -- limit with condition

SELECT *
FROM student
ORDER BY marks; -- order by clause by default asecending order

SELECT *
FROM student
ORDER BY marks desc; -- desc for descending

SELECT *
FROM student
ORDER BY grade;

-- aggregate functions
select count(*) -- count
from student;

select min(marks) -- min
from student;

select max(marks) -- max
from student;

select avg(marks) -- avg
from student;

select sum(marks) -- sum
from student;

-- group by clause
select city , count(marks)
from student
group by city;