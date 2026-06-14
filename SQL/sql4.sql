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