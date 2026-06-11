use college;
drop table student;
create table student(
id int primary key,
name varchar(20),
age int not null
);
insert into student values(1,"rohan",13);
insert into student values(2,"shammpy",21);
insert into student
(name ,age,id)
 values
("sam",12,2),
("chirst",21,3);
select * from student;
select age from student;

show databases;
show tables;

#to add new column to predefined table
alter table student 
add rollNo int primary key;