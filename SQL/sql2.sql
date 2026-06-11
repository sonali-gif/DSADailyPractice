create database if not  exists XYZ;
use XYZ;
create table employee(
id int primary key,
namee varchar(50),
salary int not null
);

insert into employee values(1,"adam",25000);
insert into employee values(2,"bob",30000);
insert into employee values(3,"casey",40000);

select * from employee;

