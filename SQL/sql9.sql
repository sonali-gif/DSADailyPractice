show databases;
create database emply;
use  emply;
create table info(
name varchar(15),
age int ,
email varchar(50) not null,
empId varchar(10) primary key,
city varchar(20)
);

insert into info values("sam",22,"abc@gm.vv",102,"indor");
delete database emply;
