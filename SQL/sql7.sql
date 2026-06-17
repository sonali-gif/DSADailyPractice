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

