use college;

alter table student
add surname varchar(20);
select * from student;
 
 -- delete column
alter table student
drop surname ;

-- chng col name
alter table student
change name f_name varchar(30);

-- modify predefined column datatyp
alter table student
modify f_name varchar(40) not null;

-- rename
alter table student
rename st;

alter table st
rename student;
 -- join operations
create table s1(
student_id int primary key,
name varchar(30)
);
 insert into s1 values(101, "adam"),(102,"bob"),(103,"casey");
create table course(
student_id int primary key,
course varchar(30)
);
insert into course values(102,"english"),(105,"math"),(103,"science"),(107,"cs");
select * from course;
select * from s1;
-- inner join
select * from s1 
inner join course 
on s1.student_id=course.student_id;

-- left join
select * from s1 
left join course 
on s1.student_id=course.student_id;

-- right join
select * from s1 
right join course 
on s1.student_id=course.student_id;


-- full join
select * from s1 
left join course 
on s1.student_id=course.student_id
union  -- here union will give unique values only
select * from s1 
right join course 
on s1.student_id=course.student_id;

select * from s1 
left join course 
on s1.student_id=course.student_id
union all -- this will also give same values
select * from s1 
right join course 
on s1.student_id=course.student_id;

-- right exclusive
select * from s1 
right join course 
on s1.student_id=course.student_id
where s1.student_id is null;

-- left exclusive
select * from s1 
left join course 
on s1.student_id=course.student_id
where course.student_id is null;

select * from s1 
right join course 
on s1.student_id=course.student_id
where s1.student_id is null
union
select * from s1 
left join course 
on s1.student_id=course.student_id
where course.student_id is null;

-- self join
select * from s1 as a
 join course as b
on a.student_id=b.student_id;

select avg(marks) from student;

-- subqueries
select marks from student 
where marks >(
select avg(marks) from student);

select * from student;
alter table student
change f_name name varchar(90);


select name,roll from student 
where roll in
(select roll from student
where roll  % 2=0);

-- using subqueries using from 
select max(marks) from(
select * from student
where city ="delhi")as te;

-- view
create view v1 as 
select name ,city from student;

select * from v1;