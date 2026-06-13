use college;
drop table temp;
create table temp(
age int ,
name varchar(30),
salary int default 6780,
#primary key(age,name),
id int primary key

);
insert into temp values(21,"sam",34560,6);
insert into temp values(21,"shym",58790,8);
insert into temp (age,name)values(28,"ram");

select * from temp;

create table tem2(
name varchar(78),
c_id int,
foreign key (c_id) references temp(id)
)