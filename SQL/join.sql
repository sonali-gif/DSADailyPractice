use college;
create table emppp(
emp_id int,
name varchar(30),
dept_id int
);

create table depttt(
dept_id int,
dept_name varchar(40)
);

insert into emppp values(1,"rahul", 10);
insert into emppp values(2,"Priya", 20);
insert into emppp values(3,"Amit", 10);
insert into emppp values(4,"Neha", 30);

insert into depttt values(10,"IT");
insert into depttt values(20,"HR");
insert into depttt values(40,"Sales");

#inner join -- Returns only matching rows from both tables
select emppp.name,depttt.dept_name
from emppp 
inner join depttt
on emppp.dept_id =depttt.dept_id;

# left join-- ALL rows from the LEFT table + matching rows from RIGHT table.
select emppp.name,depttt.dept_name
from emppp 
left join depttt
on emppp.dept_id =depttt.dept_id;


# right join-- ALL rows from the RIGHT table + matching rows from LEFT table.
select emppp.name,depttt.dept_name
from emppp 
right join depttt
on emppp.dept_id =depttt.dept_id;

#full outer join -- Returns: ALL rows from both tables. 
#Matching rows are combined. Unmatched rows get NULL.
# it does not get supported in mysql so we use UNION 
select emppp.name,depttt.dept_name
from emppp 
left join depttt
on emppp.dept_id =depttt.dept_id
union
select emppp.name,depttt.dept_name
from emppp 
right join depttt
on emppp.dept_id =depttt.dept_id;

-- Find employees who don't have a matching department.
SELECT e.name
FROM Emppp e
LEFT JOIN depttt d
ON e.dept_id = d.dept_id
WHERE d.dept_id IS NULL;
