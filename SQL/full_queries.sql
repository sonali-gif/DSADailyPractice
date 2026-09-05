use college;
show tables ;
create table employee(
id int primary key,
name varchar(30),
dept varchar(20),
salary int,
city varchar(30) default "Indore"
);

insert  into employee values(1,"Rahul", "IT",50000,NULL);-- it will take null value not indore defualt
insert  into employee values(2,"Priya", "HR",60000,"Bhopal");
insert  into employee(id,name,dept,salary) values(3,"Amit", "IT",70000);
insert  into employee values(4,"Neha", "HR",55000,default);
insert  into employee values(5,"Riya", "sale",45000,"Bhopal");

select * from employee;

select name from employee;

select * from employee 
where city ="Indore";

select name, salary from employee 
where salary >50000;

select name ,salary from employee
where salary>50000 and city="bhopal";

select name ,salary from employee
where salary>50000 or city="bhopal";

select * from employee 
where salary<=50000;

select * from employee
order by salary asc;

select * from employee
order by salary desc;

select distinct dept 
from employee;

select count(*) 
from employee;

select sum(salary)
from employee;

select avg(salary)
from employee;

select max(id)
from employee;

select min(id)
from employee;

# GROUP BY combines rows having the same value into groups.
select dept, avg(salary)
from employee
group by dept;

select dept, avg(salary)
from employee
group by dept
having avg(salary)>55000;