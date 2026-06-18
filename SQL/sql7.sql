use college;
select city,avg(marks) -- to find avg marks in each city in asec order
from student 
group by city ;

describe student;

set sql_safe_updates =0; -- it turn off safe mode
-- update
update student 
set grade ="o"
where grade ="a";
select * from student;

update student
set marks =90
where roll =102;

update student
set marks =marks+1;

-- delete
delete from student 
where marks <20;

-- foreign key
create table t1( -- parent table
id int primary key,
name varchar(30)
);

create table t2(
id int primary key, -- child table
name varchar(30),
dept_id int ,
foreign key (dept_id)references t1(id)
on update cascade -- if there is update in parent table auto update in child table
on delete cascade -- if parent tables id delete it automatically delte it from child table also
)
