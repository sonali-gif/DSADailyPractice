show databases;
use college;
show tables;

-- DDL COMMANDS

# create - creating table
create table stu1(
id int primary key,
name varchar(50),
age int 
);

#alter -- to make changes in DB structure
alter table stu1
add email varchar(50);

#drop - this delete entire table structure after this no table exist
drop table stu1;

# truncate -- this will delete all rows from table but structure will be still there
truncate table stu1;